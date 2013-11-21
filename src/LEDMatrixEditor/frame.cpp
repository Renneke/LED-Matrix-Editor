#include "frame.h"

Frame::Frame() : p_iDelay(100)
{
    for(int i=0;i<FRAME;i++)
        p_pFrame[i]=0x00;
}

Frame::Frame(int iDelay) : p_iDelay(iDelay)
{
    for(int i=0;i<FRAME;i++)
        p_pFrame[i]=0x00;
}


void Frame::vSetDelay(unsigned short iDelay)
{
    p_iDelay = iDelay;
}

unsigned short Frame::iGetDelay()
{
    return p_iDelay;
}

void Frame::vMove(int iDX, int iDY)
{
    char *pCopy = new char[FRAME];
    memcpy(pCopy, p_pFrame, FRAME);

    for(int x=0;x<FRAME_WIDTH;x++)
        for(int y=0;y<FRAME_HEIGHT;y++)
        {
            int _x = x+iDX;
            int _y = y+iDY;
            vSetPixel(x, y, bGetPixel(_x, _y, pCopy));
        }

    delete pCopy;
}

void Frame::vSetPixel(int iX, int iY, bool bState)
{
   if(iX>=0 && iX<FRAME_WIDTH && iY>=0 && iY<FRAME_HEIGHT)
        if(bState)
            p_pFrame[iY*FRAME_WIDTH/8+iX/8] |= (1<<(iX%8));
        else
            p_pFrame[iY*FRAME_WIDTH/8+iX/8] &= ~(1<<(iX%8));
}

bool Frame::bGetPixel(int iX, int iY)
{
    return bGetPixel(iX, iY, p_pFrame);
}

void Frame::vFill(bool bState)
{
    for(int i=0;i<FRAME;i++)
        p_pFrame[i]=bState?0xFF:0x00;
}

bool Frame::bGetPixel(int iX, int iY, char *pSrc)
{
    if(iX>=0 && iX<FRAME_WIDTH && iY>=0 && iY<FRAME_HEIGHT)
        return (bool)((pSrc[iY*FRAME_WIDTH/8+iX/8] >> (iX%8) ) & 1);
    return false;
}

ostream &Frame::saveStream(ostream &stream)
{
    stream.write((char*)&p_iDelay, sizeof(unsigned short));

    for(int i=0;i<FRAME;i++)
        stream.write((char*)&p_pFrame[i], sizeof(unsigned char));
    return stream;
}

istream &Frame::readStream(istream &stream)
{
    stream.read((char*)&p_iDelay, sizeof(unsigned short));
    unsigned int pos = stream.tellg();
    for(int i=0;i<FRAME;i++)
        stream.read((char*)&p_pFrame[i], sizeof(unsigned char));
    return stream;
}

ostream &operator<<(ostream &stream, Frame &frame)
{
    return frame.saveStream(stream);
}


istream &operator>>(istream &stream, Frame &frame)
{
    return frame.readStream(stream);
}
