#include "frame.h"
#include "font3x6.h"
#include "font5x7.h"
#include "letter.h"

Letter::Letter(char cLetter, int iX, int iY, eFont eFont) : p_cLetter(cLetter), p_iX(iX), p_iY(iY), p_eFont(eFont)
{

}

void Letter::vMove(int iDX, int iDY)
{
    p_iX += iDX;
    p_iY += iDY;
}

void Letter::vLetterToFrame(Frame *pFrame, bool bInvertivbehaviour)
{
    if(p_eFont == EFONT_3x6)
    {
        unsigned char* p_pSmallLetter = &g_pFont3x6[(p_cLetter-32)*3];


        for(int iX = p_iX, iXRel = 0;iXRel<4; ++iX, ++iXRel)
                for(int iY = p_iY, iYRel = 0;iYRel<6; ++iY, ++iYRel)
                {
                    unsigned char bByte = *(p_pSmallLetter+iYRel/2);
                    bool bState;
                    if(iYRel%2==0)
                        bState = (bByte>>(7-iXRel)) & 1;
                    else
                        bState = (bByte>>(3-iXRel)) & 1;

                    if(bInvertivbehaviour)
                    {
                        if(bState)
                        {
                            pFrame->vSetPixel(iX, iY, !pFrame->bGetPixel(iX, iY));
                        }
                    }else
                        if(bState) pFrame->vSetPixel(iX, iY, bState);
                }
    }else if(p_eFont == EFONT_5x7)
    {
        unsigned char* p_pBigLetter = &g_pFont5x7[(p_cLetter-32)*5];

        for(int iX = p_iX, iXRel = 0;iXRel<5; ++iX, ++iXRel)
                for(int iY = p_iY, iYRel = 6;iYRel>=0; ++iY, --iYRel)
                {
                    unsigned int pCol = *(p_pBigLetter+iXRel);
                    bool bState = (pCol >> (iYRel+1)) & 1;
                    if(bInvertivbehaviour)
                    {
                        if(bState)
                        {
                            pFrame->vSetPixel(iX, iY, !pFrame->bGetPixel(iX, iY));
                        }
                    }else
                        if(bState) pFrame->vSetPixel(iX, iY, bState);
                }
    }
}
