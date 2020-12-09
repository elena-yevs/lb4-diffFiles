#include "FullTime.h"
#include "Time.h"

// ������ �����������
FullTime::FullTime()
{
    secs = 0;
};

// ������ �����������
FullTime::FullTime(int hh, int mm, int ss) :Time(hh, mm)
{
    if (ss >= 0 && ss < 60)
        secs = ss;
    else
        ss = 0;
};

// ����������� ������� setsecs
int FullTime::setsecs(int ss)
{
    if (ss > 59 || ss < 0)
        return 1;

    secs = ss;
    return 0;
};

// ����������� ������� getsecs
int FullTime::getsecs(void)
{
    return secs;
};

// ����������� ������� gettime
void FullTime::gettime(char* rr)
{
    char w[3];

    Time::gettime(rr);
    strcat(rr, ":");
    itoa(secs, w, 10);
    strcat(rr, w);

    return;
};

// ����������� ������� print
void FullTime::print()
{
    // ��������� ������ ��������
    //  � ������ S
    char w[3];

    Time::gettime(ss);
    strcat(ss, ":");
    itoa(secs, w, 10);
    strcat(ss, w);
    cout << ss << endl;
    return;
}