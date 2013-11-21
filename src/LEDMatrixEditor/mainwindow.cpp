#include <QFileDialog>
#include <QMessageBox>
#include <fstream>
using namespace std;

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "frame.h"
#include "addtextanimationdialog.h"
#include "savedialog.h"
#include "addworddialog.h"
#include "ledmatrix.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    p_FrameManager(),
    p_TimeManager(),
    p_pAnimationTimer(0)
{
    ui->setupUi(this);

    int iID = p_FrameManager.iAddFrame(100);
    p_FrameManager.bSetCurrentFrame(iID);
    ui->widget->vSetFrame(p_FrameManager.pGetCurrentFrame());
    
    vCreateTimeline();
}

MainWindow::~MainWindow()
{
    if(p_pAnimationTimer)
    {
        p_pAnimationTimer->stop();
        delete p_pAnimationTimer;
    }
    delete ui;
}

void MainWindow::vCreateTimeline()
{
    p_Map.clear();

    QHBoxLayout* pLayout = new QHBoxLayout();

    for(int i=0;i<p_FrameManager.iGetNumFrames();i++)
    {
        Frame* pFrame = p_FrameManager.pGetFrame(i);
        LEDMatrix* pWidget = new LEDMatrix();

        p_Map[pFrame] = pWidget;    // Add to map

        pWidget->setEnabled(false);
        pWidget->setMaximumSize(QSize(150,100));
        pWidget->setMinimumSize(QSize(150,100));
        pWidget->vSetFrame(pFrame, i==p_FrameManager.iGetCurrentFrame());

        pLayout->addWidget(pWidget);
    }
    QWidget* pWidget = new QWidget();
    pWidget->setMinimumWidth(160*p_FrameManager.iGetNumFrames());
    pWidget->setLayout(pLayout);
    ui->scrollArea->setWidget(pWidget);

    ui->scrollArea->horizontalScrollBar()->setValue((p_FrameManager.iGetCurrentFrame()-3)*160);

    ui->horizontalScrollBar->setRange(0, p_FrameManager.iGetNumFrames()-1);
    ui->horizontalScrollBar->setValue(p_FrameManager.iGetCurrentFrame());

    ui->spinBox->setValue(p_FrameManager.pGetCurrentFrame()->iGetDelay());

    ui->lcdNumber->display(p_FrameManager.iGetCurrentFrame());
}

void MainWindow::vCreateNewFrame()
{
    p_FrameManager.bSetCurrentFrame( p_FrameManager.iAddFrame(ui->spinBox->value(), ui->checkBox->isChecked()) );
    ui->widget->vSetFrame(p_FrameManager.pGetCurrentFrame());
    vCreateTimeline();
    ui->widget->update();
}


void MainWindow::keyPressEvent(QKeyEvent *k)
{
    if(k->key()==0x4e) // n
    {
        vCreateNewFrame();
    }
    if(k->key()==0x57) // up w
    {
        p_FrameManager.pGetCurrentFrame()->vMove(0,1);
        ui->widget->update();
    }
    if(k->key()==0x53) // down s
    {
        p_FrameManager.pGetCurrentFrame()->vMove(0,-1);
        ui->widget->update();
    }
    if(k->key()==0x41) // left a
    {
        p_FrameManager.pGetCurrentFrame()->vMove(1,0);
        ui->widget->update();
    }
    if(k->key()==0x44) // right d
    {
        p_FrameManager.pGetCurrentFrame()->vMove(-1,0);
        ui->widget->update();
    }
    if(k->key()==0x52 && p_FrameManager.iGetNumFrames()>1) // r
    {
        delete p_Map[p_FrameManager.pGetCurrentFrame()];
        p_FrameManager.vDeleteFrame(p_FrameManager.iGetCurrentFrame());
        ui->widget->vSetFrame(p_FrameManager.pGetCurrentFrame());
        //vCreateTimeline();
        ui->widget->update();
    }
    if(k->key()==0x46) // f fill
    {
        p_FrameManager.pGetCurrentFrame()->vFill(true);
        ui->widget->update();
        vCreateTimeline();
    }
    if(k->key()==0x43) // c clear
    {
        p_FrameManager.pGetCurrentFrame()->vFill(false);
        ui->widget->update();
        vCreateTimeline();
    }
}

void MainWindow::on_horizontalScrollBar_valueChanged(int value)
{
    p_Map[p_FrameManager.pGetCurrentFrame()]->vSetFrame( p_FrameManager.pGetCurrentFrame(), false );
    p_Map[p_FrameManager.pGetCurrentFrame()]->update();

    p_FrameManager.bSetCurrentFrame(value);
    ui->widget->vSetFrame(p_FrameManager.pGetCurrentFrame());

    p_Map[p_FrameManager.pGetCurrentFrame()]->vSetFrame( p_FrameManager.pGetCurrentFrame(), true );
    p_Map[p_FrameManager.pGetCurrentFrame()]->update();

    ui->widget->update();
    ui->scrollArea->horizontalScrollBar()->setValue((value-3)*160);
    ui->spinBox->setValue(p_FrameManager.pGetCurrentFrame()->iGetDelay());
    ui->lcdNumber->display(p_FrameManager.iGetCurrentFrame());
}

void MainWindow::on_actionExit_triggered()
{
    close();
}

void MainWindow::on_actionAdd_Textanimation_triggered()
{
    AddTextAnimationDialog dialog(this, &p_FrameManager);
    dialog.exec();
    vCreateTimeline();
}

void MainWindow::on_spinBox_valueChanged(const QString &arg1)
{
    ui->widget->setFocus();
    p_FrameManager.pGetCurrentFrame()->vSetDelay(ui->spinBox->value());
}



void MainWindow::vUpdateAnimation()
{
    if(!p_FrameManager.bNextFrame())
        p_FrameManager.bSetCurrentFrame(0);

    ui->widget->vSetFrame(p_FrameManager.pGetCurrentFrame());
    ui->widget->update();
    ui->spinBox->setValue(p_FrameManager.pGetCurrentFrame()->iGetDelay());

    ui->lcdNumber->display(p_FrameManager.iGetCurrentFrame());
    p_pAnimationTimer->setInterval(p_FrameManager.pGetCurrentFrame()->iGetDelay());
}

void MainWindow::on_commandLinkButton_clicked()
{
    if(p_pAnimationTimer)
    {
        p_pAnimationTimer->stop();
        delete p_pAnimationTimer;
        p_pAnimationTimer = 0;
        ui->commandLinkButton->setText("Play");
    }else{
        p_pAnimationTimer = new QTimer(this);
        connect(p_pAnimationTimer, SIGNAL(timeout()), this, SLOT(vUpdateAnimation()));
        p_pAnimationTimer->start(p_FrameManager.pGetCurrentFrame()->iGetDelay());

        ui->commandLinkButton->setText("Pause");
    }
}



void MainWindow::on_actionOpen_Animation_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                         "",
                                                         tr("Animation (*.ani)"));
    ifstream f(fileName.toLocal8Bit().data());
    if(f.good())
    {
        f >> p_TimeManager;
        f >> p_FrameManager;
        setWindowTitle(fileName);

        vCreateTimeline();

    }else{
        QMessageBox msgBox;
        msgBox.setDetailedText(fileName.toLocal8Bit().data());
        msgBox.setText("The document could not be opend!");
        msgBox.exec();
    }
    f.close();
}

void MainWindow::on_actionSave_Animation_triggered()
{
    SaveDialog pDialog(this, &p_TimeManager, &p_FrameManager);
    pDialog.exec();
}

void MainWindow::on_actionNew_Animation_triggered()
{
    QMessageBox msgBox;
     msgBox.setText("Removing all frames and start a new animation?");
     msgBox.setInformativeText("Do you want to continue?");
     msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Discard);
     msgBox.setDefaultButton(QMessageBox::Yes);
     msgBox.setIcon(QMessageBox::Warning);
     int ret = msgBox.exec();
     if(ret == QMessageBox::Yes)
     {
         setWindowTitle(tr("New animation"));
         p_FrameManager = FrameManager();

         int iID = p_FrameManager.iAddFrame(0);
         p_FrameManager.bSetCurrentFrame(iID);
         ui->widget->vSetFrame(p_FrameManager.pGetCurrentFrame());
         vCreateTimeline();
     }
}

void MainWindow::on_actionAdd_Word_triggered()
{
    AddWordDialog dialog(this, &p_FrameManager);
    dialog.exec();
    ui->widget->update();
}
