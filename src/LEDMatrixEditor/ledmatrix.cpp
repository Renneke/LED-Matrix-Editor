#include "ledmatrix.h"
#include "ui_ledmatrix.h"

#include <QPen>
#include <QBrush>
#include <math.h>

LEDMatrix::LEDMatrix(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LEDMatrix),
    p_pFrame(0),
    p_bSelected(false)
{
    ui->setupUi(this);
}

LEDMatrix::~LEDMatrix()
{
    delete ui;
}

void LEDMatrix::vSetFrame(Frame *pFrame, bool bSelected)
{
    p_bSelected = bSelected;
    p_pFrame = pFrame;
    p_Image = QImage(width()+100, height()+50, QImage::Format_ARGB32);
    vDrawMatrix();
}

void LEDMatrix::paintEvent(QPaintEvent *e)
{
    QWidget::paintEvent(e);
    QPainter painter(this);
    painter.drawImage(e->rect(), p_Image, e->rect());
}

void LEDMatrix::mouseMoveEvent(QMouseEvent *e)
{
    if(!p_pFrame) return;


    int r = height()/FRAME_HEIGHT/2;
    QPoint p1 = QPoint( round((double)(e->pos().x()-r)/(r*2)),
                       round((double)(e->pos().y()-r)/(r*2)));
    if(e->buttons() & Qt::LeftButton)
        p_pFrame->vSetPixel(p1.x(), p1.y(), true);
    else if(e->buttons() & Qt::RightButton)
        p_pFrame->vSetPixel(p1.x(), p1.y(), false);

    update();
}

void LEDMatrix::mousePressEvent(QMouseEvent *e)
{
    mouseMoveEvent(e);
}

QImage *LEDMatrix::pGetImage()
{
    return &p_Image;
}

void LEDMatrix::update()
{
    vDrawMatrix();
    QWidget::update();
}

void LEDMatrix::vDrawMatrix()
{
    int r = height()/FRAME_HEIGHT/2;


    p_Image.fill(Qt::transparent);

    QPen pen(Qt::black,1,Qt::SolidLine);
    QBrush brush(Qt::red), nonebrush(Qt::white), transbrush(Qt::transparent), selected(Qt::blue);
    QPainter p(&p_Image);
    p.setPen(pen);
    p.setBrush(nonebrush);


    if(p_bSelected)
        p.setBrush(selected);
    else
        p.setBrush(transbrush);

    p.drawRect(0,0,r*FRAME_WIDTH*2, r*FRAME_HEIGHT*2);

    for(int x=0; x<FRAME_WIDTH; x++)
        for(int y=0; y<FRAME_HEIGHT; y++)
        {
            if(p_pFrame)
                if(p_pFrame->bGetPixel(x, y))
                    p.setBrush(brush);
                else
                    p.setBrush(nonebrush);

            int _x = r + x*2*r;
            int _y = r + y*2*r;
            p.drawEllipse(QPoint(_x, _y), r, r);
        }
}
