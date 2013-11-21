#include "addtextanimationdialog.h"
#include "ui_addtextanimationdialog.h"
#include "letter.h"
#include "frame.h"
#include "framemanager.h"
#include <vector>
using namespace std;

AddTextAnimationDialog::AddTextAnimationDialog(QWidget *parent, FrameManager* pFrameManager) :
    QDialog(parent),
    ui(new Ui::AddTextAnimationDialog),
    p_pFrameManager(pFrameManager)
{
    ui->setupUi(this);
}

AddTextAnimationDialog::~AddTextAnimationDialog()
{
    delete ui;
}



void AddTextAnimationDialog::on_verticalSlider_valueChanged(int value)
{
    switch(ui->comboBox_2->currentIndex())
    {
    case 0: // 5x7 Font
        ui->verticalSlider_2->setValue(value+7);
        break;
    case 1: // 3x5 Font
        ui->verticalSlider_2->setValue(value+5);
        break;
    }
}

void AddTextAnimationDialog::on_verticalSlider_2_valueChanged(int value)
{
    switch(ui->comboBox_2->currentIndex())
    {
    case 0: // 5x7 Font
        ui->verticalSlider->setValue(value-7);
        break;
    case 1: // 3x5 Font
        ui->verticalSlider->setValue(value-5);
        break;
    }
}

void AddTextAnimationDialog::on_buttonBox_accepted()
{
    Frame* pCopyMe = p_pFrameManager->pGetCurrentFrame();

    vector<Letter*> letters;
    QString text =  ui->plainTextEdit->toPlainText();
    int iLength = text.length();
    char* szText = text.toLocal8Bit().data();
    eFont font = ui->comboBox_2->currentIndex()==0?EFONT_5x7:EFONT_3x6;
    int iLetterWidth = font==EFONT_5x7?5:3;
    int iLetterHeight = font==EFONT_5x7?7:6;
    int iNumFrames = iLength*(iLetterWidth+1) + FRAME_WIDTH;

    int iXStart = 0;
    if(ui->comboBox->currentIndex() == 0)
        iXStart = FRAME_WIDTH;
    else
        iXStart = -(iLetterWidth+1)*iLength+1;

    int iYStart = ui->verticalSlider->value();


    for(int i=0, x=iXStart; i<iLength; ++i, x+=iLetterWidth+1)
    {
        Letter* pLetter = new Letter(szText[i], x, FRAME_HEIGHT-iYStart-iLetterHeight, font);
        letters.push_back(pLetter);
    }

    for(int i=0; i<iNumFrames;++i)
    {
        Frame* pFrame;

        if(ui->checkBox_2->isChecked())
        {
            pFrame = new Frame(*pCopyMe);
            pFrame->vSetDelay(ui->spinBox->value());
        }else
            pFrame = new Frame(ui->spinBox->value());

        for(Letter* pLetter : letters)
        {
            pLetter->vLetterToFrame(pFrame, ui->checkBox->isChecked());

            if(ui->comboBox->currentIndex() == 0)
                pLetter->vMove(-1, 0);
            else
                pLetter->vMove(1, 0);

        }
        p_pFrameManager->iAddFrame(pFrame);
        p_pFrameManager->bNextFrame();
    }


    for(Letter* pLetter : letters)
        delete pLetter;
}
