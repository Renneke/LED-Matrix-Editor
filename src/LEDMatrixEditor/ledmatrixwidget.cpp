#include "ledmatrixwidget.h"
#include "ui_ledmatrixwidget.h"



LEDMatrixWidget::LEDMatrixWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LEDMatrixWidget),
    p_ImageBuffer(800, 600, QImage::Format_RGB32)
{
    ui->setupUi(this);
}

LEDMatrixWidget::~LEDMatrixWidget()
{
    delete ui;
}


void LEDMatrixWidget::vSetFrame(Frame *pFrame)
{

}

void LEDMatrixWidget::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    QRect dirtyRect = e->rect();
    painter.drawImage(dirtyRect, p_ImageBuffer, dirtyRect);

/*
    QPen pen(Qt::black,1,Qt::SolidLine);
    QBrush brush(Qt::red), nonebrush(Qt::transparent);
    QPainter p(viewport());
    p.setRenderHint(QPainter::Antialiasing);
    p.setPen(pen);
    p.begin(this);

    for(int x=0; x<FRAME_WIDTH; x++)
        for(int y=0; y<FRAME_HEIGHT; y++)
        {
            if(p_pFrame->bGetPixel(x, y))
                p.setBrush(brush);
            else
                p.setBrush(nonebrush);

            int r = height()/FRAME_HEIGHT/2;
            int _x = r + x*2*r;
            int _y = r + y*2*r;
            p.drawEllipse(QPoint(_x, _y), r, r);
        }

    p.end();*/
}

void LEDMatrixWidget::mouseMoveEvent(QMouseEvent *e)
{
    if(isEnabled())
    {
        int r = height()/FRAME_HEIGHT/2;
        QPoint p1 = QPoint( round((double)(e->pos().x()-r)/(r*2)),
                           round((double)(e->pos().y()-r)/(r*2)));
        if(e->buttons() & Qt::LeftButton)
            p_Frame.vSetPixel(p1.x(), p1.y(), true);
        else if(e->buttons() & Qt::RightButton)
            p_Frame.vSetPixel(p1.x(), p1.y(), false);

        QPen pen(Qt::black,1,Qt::SolidLine);
        QBrush brush(Qt::red), nonebrush(Qt::transparent);
        QPainter p(&p_ImageBuffer);
        p.setRenderHint(QPainter::Antialiasing);
        p.setPen(pen);

        for(int x=0; x<FRAME_WIDTH; x++)
            for(int y=0; y<FRAME_HEIGHT; y++)
            {
                if(p_Frame.bGetPixel(x, y))
                    p.setBrush(brush);
                else
                    p.setBrush(nonebrush);

                int r = height()/FRAME_HEIGHT/2;
                int _x = r + x*2*r;
                int _y = r + y*2*r;
                p.drawEllipse(QPoint(_x, _y), r, r);
            }

       update();
    }
}
