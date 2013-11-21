#ifndef ADDWORDDIALOG_H
#define ADDWORDDIALOG_H

#include <QDialog>

namespace Ui {
class AddWordDialog;
}

class FrameManager;

class AddWordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddWordDialog(QWidget *parent, FrameManager* pFrameManager);
    ~AddWordDialog();

private slots:
    void on_buttonBox_accepted();

    void on_pushButton_clicked();

private:
    Ui::AddWordDialog *ui;
    FrameManager* p_pFrameManager;
};

#endif // ADDWORDDIALOG_H
