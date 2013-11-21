#ifndef TIMEMANAGER_H
#define TIMEMANAGER_H

#include <iostream>
using namespace std;

typedef enum
{
    ETIME_EVERY_YEAR=0,
    ETIME_EVERY_WEEK,
    ETIME_ONCE,
} eOccurence;

typedef struct
{
    unsigned char hour, min, sec;
} sTime;

typedef struct
{
    unsigned char day, month, year;
} sDate;

class TimeManager
{
public:
    TimeManager();

    ostream &streamWrite(ostream& stream);
    istream& streamRead(istream& stream);

    void vSetInterval(int iInterval);
    void vSetDays(bool bMo, bool bDi, bool bMi, bool bDo, bool bFr, bool bSa, bool bSo);
    void vSetStartTime(sTime start);
    void vSetEndTime(sTime end);
    void vSetDate(sDate date);
    void vSetOccurence(eOccurence _eOccurence);

    int iGetInterval();
    bool *pGetDays();
    sTime* pGetStartTime();
    sTime* pGetEndTime();
    sDate* pGetDate();
    eOccurence eGetOccurence();

private:
    eOccurence p_eOccurence;
    sTime p_sStart, p_sEnd;
    sDate p_sDate;
    bool p_pDay[7];
    int p_iInterval;    // Alle x minuten erneut anzeigen
};

ostream& operator<<(ostream& stream, TimeManager& timeManager);
istream& operator>>(istream& stream, TimeManager& timeManager);

#endif // TIMEMANAGER_H
