#ifndef FRAMEMANAGER_H
#define FRAMEMANAGER_H

#include <vector>
#include <iostream>
using namespace std;

class Frame;

class FrameManager
{
public:
    FrameManager();
    ~FrameManager();

    int iGetCurrentFrame();
    Frame* pGetCurrentFrame();
    bool bSetCurrentFrame(int iID);
    bool bNextFrame();
    Frame* pGetFrame(int iID);

    int iGetNumFrames();

    int iAddFrame(int iDelay, bool bCopyCurrent=false);
    int iAddFrame(Frame* pFrame);
    void vAddFrames(vector<Frame*> frames);
    void vAddFramesAdditiv(vector<Frame*> frames, int iStartID);
    void vDeleteFrame(int iID);

    ostream& saveStream(ostream& stream);
    istream& readStream(istream& stream);
private:
    int p_iCurrentFrame;
    vector<Frame*> p_Frames;
};

ostream& operator<<(ostream& stream, FrameManager& frame);
istream& operator>>(istream& stream, FrameManager& frame);

#endif // FRAMEMANAGER_H
