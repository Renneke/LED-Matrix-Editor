#include "frame.h"
#include "framemanager.h"


FrameManager::FrameManager() : p_iCurrentFrame(-1)
{

}

FrameManager::~FrameManager()
{
    for(Frame* pFrame : p_Frames)
    {
        delete pFrame;
    }
    p_Frames.clear();
}

int FrameManager::iGetCurrentFrame()
{
    return p_iCurrentFrame;
}

Frame *FrameManager::pGetCurrentFrame()
{
    return p_Frames[p_iCurrentFrame];
}

bool FrameManager::bSetCurrentFrame(int iID)
{
    if(iID>=0 && iID<iGetNumFrames())
    {
        p_iCurrentFrame = iID;
        return true;
    }
    return false;
}

bool FrameManager::bNextFrame()
{
    return bSetCurrentFrame(p_iCurrentFrame+1);
}

Frame *FrameManager::pGetFrame(int iID)
{
    if(iID>=0 && iID<iGetNumFrames())
        return p_Frames[iID];
    return 0;
}

int FrameManager::iGetNumFrames()
{
    return p_Frames.size();
}

int FrameManager::iAddFrame(int iDelay, bool bCopyCurrent)
{
    Frame* pFrame;

    if(bCopyCurrent)
        pFrame = new Frame(*pGetCurrentFrame());
    else
        pFrame = new Frame(iDelay);

    if(p_Frames.empty())
    {
        p_iCurrentFrame = 0;
        p_Frames.push_back(pFrame);
    }else
        p_Frames.insert(p_Frames.begin() + iGetCurrentFrame() + 1, pFrame); // Richtiger offset?
    return iGetCurrentFrame() + 1;
}

int FrameManager::iAddFrame(Frame *pFrame)
{
    if(p_Frames.empty())
    {
        p_iCurrentFrame = 0;
        p_Frames.push_back(pFrame);
    }else
        p_Frames.insert(p_Frames.begin() + iGetCurrentFrame() + 1, pFrame); // Richtiger offset?
    return iGetCurrentFrame() + 1;
}

void FrameManager::vDeleteFrame(int iID)
{
    if(iID>=0 && iID<iGetNumFrames())
    {
        p_Frames.erase(p_Frames.begin()+iID);
        if(iGetCurrentFrame()>= iGetNumFrames())
            if(iGetNumFrames()>0)
                p_iCurrentFrame = iGetNumFrames()-1;
            else
                p_iCurrentFrame = -1;   // Frameslist is empty
    }
}

ostream &FrameManager::saveStream(ostream &stream)
{
    unsigned short iNumFrames = iGetNumFrames();
    stream.write((char*)&iNumFrames, sizeof(unsigned short ));
    for(Frame* pFrame : p_Frames)
    {
        stream << *pFrame;
    }
    return stream;
}

istream &FrameManager::readStream(istream &stream)
{
    for(Frame* pFrame : p_Frames)
    {
        delete pFrame;
    }
    p_Frames.clear();


    unsigned short  iNumFrames = 0;
    stream.read((char*) &iNumFrames, sizeof(unsigned short));

    for(int i=0;i<iNumFrames;i++)
    {
        Frame* pFrame = new Frame();
        stream >> *pFrame;
        p_Frames.push_back(pFrame);
    }
    return stream;
}


ostream &operator<<(ostream &stream, FrameManager &frame)
{
    return frame.saveStream(stream);
}


istream &operator>>(istream &stream, FrameManager &frame)
{
    return frame.readStream(stream);
}
