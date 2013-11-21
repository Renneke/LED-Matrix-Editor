#include <QFileDialog>
#include <QMessageBox>
#include <fstream>
using namespace std;

#include "framemanager.h"
#include "timemanager.h"
#include "savedialog.h"
#include "ui_savedialog.h"


SaveDialog::SaveDialog(QWidget *parent, TimeManager* pTimeManager, FrameManager* pFrameManager) :
    QDialog(parent),
    ui(new Ui::SaveDialog),
    p_pTimeManager(pTimeManager),
    p_pFrameManager(pFrameManager)
{
    ui->setupUi(this);
    if(p_pTimeManager)
        {
            ui->tabWidget->setCurrentIndex((int)p_pTimeManager->eGetOccurence());
            switch(p_pTimeManager->eGetOccurence())
            {
            case ETIME_ONCE:
            {
                sDate *d = p_pTimeManager->pGetDate();
                ui->calendarWidget_2->setSelectedDate(QDate(d->year, d->month, d->day));

                sTime *ts = p_pTimeManager->pGetStartTime();
                ui->timeEdit_5->setTime(QTime(ts->hour,ts->min,ts->sec));

                sTime *te = p_pTimeManager->pGetEndTime();
                ui->timeEdit_6->setTime(QTime(te->hour,te->min,te->sec));

                ui->spinBox_3->setValue(p_pTimeManager->iGetInterval());
            }
            break;
            case ETIME_EVERY_YEAR:
            {
                sDate *d = p_pTimeManager->pGetDate();
                ui->calendarWidget->setSelectedDate(QDate(d->year, d->month, d->day));

                sTime *ts = p_pTimeManager->pGetStartTime();
                ui->timeEdit->setTime(QTime(ts->hour,ts->min,ts->sec));

                sTime *te = p_pTimeManager->pGetEndTime();
                ui->timeEdit_2->setTime(QTime(te->hour,te->min,te->sec));

                ui->spinBox->setValue(p_pTimeManager->iGetInterval());
            }
            break;
            case ETIME_EVERY_WEEK:
            {
                sTime *ts = p_pTimeManager->pGetStartTime();
                ui->timeEdit_3->setTime(QTime(ts->hour,ts->min,ts->sec));

                sTime *te = p_pTimeManager->pGetEndTime();
                ui->timeEdit_4->setTime(QTime(te->hour,te->min,te->sec));

                ui->spinBox_2->setValue(p_pTimeManager->iGetInterval());

                ui->checkBox->setChecked(p_pTimeManager->pGetDays()[0]);
                ui->checkBox_2->setChecked(p_pTimeManager->pGetDays()[1]);
                ui->checkBox_3->setChecked(p_pTimeManager->pGetDays()[2]);
                ui->checkBox_4->setChecked(p_pTimeManager->pGetDays()[3]);
                ui->checkBox_5->setChecked(p_pTimeManager->pGetDays()[4]);
                ui->checkBox_6->setChecked(p_pTimeManager->pGetDays()[5]);
                ui->checkBox_7->setChecked(p_pTimeManager->pGetDays()[6]);
            }
            break;
            }
        }
}

SaveDialog::~SaveDialog()
{
    delete ui;
}

void SaveDialog::vSaveEveryYear()
{
    p_pTimeManager->vSetOccurence(ETIME_EVERY_YEAR);

    sDate d;
    d.day = ui->calendarWidget->selectedDate().day();
    d.month = ui->calendarWidget->selectedDate().month();
    d.year = ui->calendarWidget->selectedDate().year();
    p_pTimeManager->vSetDate(d);

    sTime ts;
    ts.hour = ui->timeEdit->time().hour();
    ts.min = ui->timeEdit->time().minute();
    ts.sec = ui->timeEdit->time().second();
    p_pTimeManager->vSetStartTime(ts);

    sTime te;
    te.hour = ui->timeEdit_2->time().hour();
    te.min = ui->timeEdit_2->time().minute();
    te.sec = ui->timeEdit_2->time().second();
    p_pTimeManager->vSetEndTime(te);

    p_pTimeManager->vSetInterval(ui->spinBox->value());
}

void SaveDialog::vSaveOnce()
{
    p_pTimeManager->vSetOccurence(ETIME_ONCE);

    sDate d;
    d.day = ui->calendarWidget_2->selectedDate().day();
    d.month = ui->calendarWidget_2->selectedDate().month();
    d.year = ui->calendarWidget_2->selectedDate().year();
    p_pTimeManager->vSetDate(d);

    sTime ts;
    ts.hour = ui->timeEdit_5->time().hour();
    ts.min = ui->timeEdit_5->time().minute();
    ts.sec = ui->timeEdit_5->time().second();
    p_pTimeManager->vSetStartTime(ts);

    sTime te;
    te.hour = ui->timeEdit_6->time().hour();
    te.min = ui->timeEdit_6->time().minute();
    te.sec = ui->timeEdit_6->time().second();
    p_pTimeManager->vSetEndTime(te);

    p_pTimeManager->vSetInterval(ui->spinBox_3->value());
}

void SaveDialog::vSaveEveryWeek()
{
    p_pTimeManager->vSetOccurence(ETIME_EVERY_WEEK);

    sTime ts;
    ts.hour = ui->timeEdit_3->time().hour();
    ts.min = ui->timeEdit_3->time().minute();
    ts.sec = ui->timeEdit_3->time().second();
    p_pTimeManager->vSetStartTime(ts);

    sTime te;
    te.hour = ui->timeEdit_4->time().hour();
    te.min = ui->timeEdit_4->time().minute();
    te.sec = ui->timeEdit_4->time().second();
    p_pTimeManager->vSetEndTime(te);

    p_pTimeManager->vSetInterval(ui->spinBox_2->value());

    p_pTimeManager->vSetDays(ui->checkBox->isChecked(),
                             ui->checkBox_2->isChecked(),
                             ui->checkBox_3->isChecked(),
                             ui->checkBox_4->isChecked(),
                             ui->checkBox_5->isChecked(),
                             ui->checkBox_6->isChecked(),
                             ui->checkBox_7->isChecked());
}

void SaveDialog::vSaveFinal()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                                                     "",
                                                     tr("Animation (*.ani)"));
    ofstream f(fileName.toLocal8Bit().data());
    if(f.good())
    {
        f << *p_pTimeManager;
        f << *p_pFrameManager;
    }else{
        QMessageBox msgBox;
        msgBox.setDetailedText(fileName.toLocal8Bit().data());
        msgBox.setText("The document could not be saved!");
        msgBox.exec();
    }
    f.close();
}


void SaveDialog::on_buttonBoxEveryYear_accepted()
{
    vSaveEveryYear();
    vSaveFinal();
    close();
}

void SaveDialog::on_buttonBox_2_accepted()
{
    vSaveEveryWeek();
    vSaveFinal();
    close();
}

void SaveDialog::on_buttonBox_3_accepted()
{
    vSaveOnce();
    vSaveFinal();
    close();
}
