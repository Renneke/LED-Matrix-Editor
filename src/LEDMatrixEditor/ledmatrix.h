#ifndef LEDMATRIX_H
#define LEDMATRIX_H

#include <QWidget>
#include <QPainter>
#include <QImage>
#include <QPaintEvent>
#include <QMouseEvent>
#include "frame.h"

namespace Ui {
class LEDMatrix;
}

class LEDMatrix : public QWidget
{
    Q_OBJECT

public:
    explicit LEDMatrix(QWidget *parent = 0);
    ~LEDMatrix();

    void vSetFrame(Frame* pFrame, bool bSelected = false);

    void paintEvent(QPaintEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);

    QImage* pGetImage();

    void update();

private:
    Ui::LEDMatrix *ui;
    QImage p_Image;
    Frame* p_pFrame;
    bool p_bSelected;

    void vDrawMatrix();
};

#endif // LEDMATRIX_H
