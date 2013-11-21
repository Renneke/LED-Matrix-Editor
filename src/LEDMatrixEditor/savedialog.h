#ifndef SAVEDIALOG_H
#define SAVEDIALOG_H

#include <QDialog>

class TimeManager;
class FrameManager;

namespace Ui {
class SaveDialog;
}

class SaveDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SaveDialog(QWidget *parent, TimeManager* pTimeManager, FrameManager* pFrameManager);
    ~SaveDialog();

    void vSaveEveryYear();
    void vSaveOnce();
    void vSaveEveryWeek();

    void vSaveFinal();

private slots:
    void on_buttonBoxEveryYear_accepted();

    void on_buttonBox_2_accepted();

    void on_buttonBox_3_accepted();

private:
    Ui::SaveDialog *ui;
    TimeManager* p_pTimeManager;
    FrameManager* p_pFrameManager;
};

#endif // SAVEDIALOG_H
