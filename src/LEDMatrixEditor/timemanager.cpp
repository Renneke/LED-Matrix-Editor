#include "timemanager.h"

TimeManager::TimeManager() : p_iInterval(3),
   /* p_sDate({0,0,0}),
    p_sStart({0,0,0}),
    p_sEnd({0,0,0}),
    p_pDay({0,0,0,0,0,0,0}),*/
    p_eOccurence(ETIME_EVERY_YEAR)
{
}

ostream &TimeManager::streamWrite(ostream &stream)
{
    stream.write((char*)&p_iInterval, sizeof(int));
    stream.write((char*)&p_pDay, sizeof(bool)*7);
    stream.write((char*)&p_eOccurence, sizeof(int));
    stream.write((char*)&p_sStart, sizeof(sTime));
    stream.write((char*)&p_sEnd, sizeof(sTime));
    stream.write((char*)&p_sDate, sizeof(sDate));
    return stream;
}

istream &TimeManager::streamRead(istream &stream)
{
    stream.read((char*)&p_iInterval, sizeof(int));
    stream.read((char*)&p_pDay, sizeof(bool)*7);
    stream.read((char*)&p_eOccurence, sizeof(int));
    stream.read((char*)&p_sStart, sizeof(sTime));
    stream.read((char*)&p_sEnd, sizeof(sTime));
    stream.read((char*)&p_sDate, sizeof(sDate));
    return stream;
}

void TimeManager::vSetInterval(int iInterval)
{
    p_iInterval = iInterval;
}

void TimeManager::vSetDays(bool bMo, bool bDi, bool bMi, bool bDo, bool bFr, bool bSa, bool bSo)
{
    p_pDay[0] = bMo;
    p_pDay[1] = bDi;
    p_pDay[2] = bMi;
    p_pDay[3] = bDo;
    p_pDay[4] = bFr;
    p_pDay[5] = bSa;
    p_pDay[6] = bSo;
}

void TimeManager::vSetStartTime(sTime start)
{
    p_sStart = start;
}

void TimeManager::vSetEndTime(sTime end)
{
    p_sEnd = end;
}

void TimeManager::vSetDate(sDate date)
{
    p_sDate = date;
}

void TimeManager::vSetOccurence(eOccurence _eOccurence)
{
    p_eOccurence = _eOccurence;
}

int TimeManager::iGetInterval()
{
    return p_iInterval;
}

bool *TimeManager::pGetDays()
{
    return p_pDay;
}

sTime *TimeManager::pGetStartTime()
{
    return &p_sStart;
}
sTime *TimeManager::pGetEndTime()
{
    return &p_sEnd;
}

sDate *TimeManager::pGetDate()
{
    return &p_sDate;
}

eOccurence TimeManager::eGetOccurence()
{
    return p_eOccurence;
}


ostream &operator<<(ostream &stream, TimeManager &timeManager)
{
    return timeManager.streamWrite(stream);
}


istream &operator>>(istream &stream, TimeManager &timeManager)
{
    return timeManager.streamRead(stream);
}
