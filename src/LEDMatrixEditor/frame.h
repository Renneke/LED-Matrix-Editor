#ifndef FRAME_H
#define FRAME_H

#include <iostream>
using namespace std;

#define FRAME_WIDTH 24
#define FRAME_HEIGHT 16
#define FRAME FRAME_WIDTH*FRAME_HEIGHT/8

// 24x16 Frame
class Frame
{
private:
    char p_pFrame[FRAME];
    unsigned short p_iDelay;
public:
    Frame();
    Frame(int iDelay);

    void vSetDelay(unsigned short iDelay);
    unsigned short iGetDelay();

    void vMove(int iDX, int iDY);

    void vSetPixel(int iX, int iY, bool bState);
    bool bGetPixel(int iX, int iY);

    void vFill(bool bState);

    ostream& saveStream(ostream& stream);
    istream& readStream(istream& stream);
private:
    bool bGetPixel(int iX, int iY, char* pSrc);
};

ostream& operator<<(ostream& stream, Frame& frame);
istream& operator>>(istream& stream, Frame& frame);

#endif // FRAME_H
