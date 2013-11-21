#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QKeyEvent>
#include <QTimer>
#include <map>
using namespace std;

#include "framemanager.h"
#include "timemanager.h"

class LEDMatrix;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_horizontalScrollBar_valueChanged(int value);

    void on_actionExit_triggered();

    void on_actionAdd_Textanimation_triggered();

    void on_spinBox_valueChanged(const QString&);

    void on_commandLinkButton_clicked();

    void vUpdateAnimation();

    void on_actionOpen_Animation_triggered();

    void on_actionSave_Animation_triggered();

    void on_actionNew_Animation_triggered();

    void on_actionAdd_Word_triggered();

private:
    Ui::MainWindow *ui;
    FrameManager p_FrameManager;
    TimeManager p_TimeManager;
    QTimer *p_pAnimationTimer;

    map<Frame*, LEDMatrix*> p_Map;

    void vCreateTimeline();
    void vCreateNewFrame();

    void keyPressEvent(QKeyEvent *k);
};

#endif // MAINWINDOW_H
