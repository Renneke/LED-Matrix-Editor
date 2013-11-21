#ifndef LETTER_H
#define LETTER_H

class Frame;

typedef enum
{
    EFONT_3x6,
    EFONT_5x7
} eFont;

class Letter
{
public:
    Letter(char cLetter, int iX, int iY, eFont eFont);

    void vMove(int iDX, int iDY);

    void vLetterToFrame(Frame* pFrame, bool bInvertivbehaviour);

private:
    char p_cLetter;
    int p_iX, p_iY;
    eFont p_eFont;
};

#endif // LETTER_H
