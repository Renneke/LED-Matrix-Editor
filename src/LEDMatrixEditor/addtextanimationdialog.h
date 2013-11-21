#ifndef ADDTEXTANIMATIONDIALOG_H
#define ADDTEXTANIMATIONDIALOG_H

#include <QDialog>

namespace Ui {
class AddTextAnimationDialog;
}

class FrameManager;

class AddTextAnimationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddTextAnimationDialog(QWidget *parent, FrameManager* pFrameManager);
    ~AddTextAnimationDialog();

private slots:
    void on_verticalSlider_valueChanged(int value);

    void on_verticalSlider_2_valueChanged(int value);

    void on_buttonBox_accepted();

private:
    Ui::AddTextAnimationDialog *ui;
    FrameManager* p_pFrameManager;
};

#endif // ADDTEXTANIMATIONDIALOG_H
