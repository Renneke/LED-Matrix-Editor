#include "addworddialog.h"
#include "ui_addworddialog.h"
#include "framemanager.h"
#include "frame.h"
#include "letter.h"

AddWordDialog::AddWordDialog(QWidget *parent, FrameManager* pFrameManager) :
    QDialog(parent),
    ui(new Ui::AddWordDialog),
    p_pFrameManager(pFrameManager)
{
    ui->setupUi(this);
}

AddWordDialog::~AddWordDialog()
{
    delete ui;
}

void AddWordDialog::on_buttonBox_accepted()
{
    int iLength = ui->lineEdit->text().length();
    int iX = ui->spinBox->value();
    int iY = ui->spinBox_2->value();

    for(int i=0;i<iLength;i++, iX+=4)
    {
        char cChar = ui->lineEdit->text().at(i).toLatin1();
        Letter letter(cChar, iX, iY, EFONT_3x6);
        letter.vLetterToFrame(p_pFrameManager->pGetCurrentFrame(), ui->checkBox->isChecked());
    }
}

void AddWordDialog::on_pushButton_clicked()
{
    int iLength = ui->lineEdit->text().length();
    ui->spinBox->setValue(FRAME_WIDTH/2-(iLength*4)/2);
    ui->spinBox_2->setValue(FRAME_HEIGHT/2-3);
}
