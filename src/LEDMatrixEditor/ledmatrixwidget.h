#ifndef LEDMATRIXWIDGET_H
#define LEDMATRIXWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QFrame>
#include <QMouseEvent>
#include <QPoint>
#include <QImage>
#include "frame.h"
#include "timemanager.h"

namespace Ui {
class LEDMatrixWidget;
}

class LEDMatrixWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LEDMatrixWidget(QWidget *parent = 0);
    ~LEDMatrixWidget();

    void vSetFrame(Frame* pFrame);

    void paintEvent(QPaintEvent *e);
    void mouseMoveEvent(QMouseEvent *e);

private:
    Ui::LEDMatrixWidget *ui;
    QImage p_ImageBuffer;
    Frame p_Frame;

};

#endif // LEDMATRIXWIDGET_H
