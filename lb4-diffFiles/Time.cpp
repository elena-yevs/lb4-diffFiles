#include "Time.h"
Time::Time()
{
    hours = 0;
    mins = 0;
};

// ������ �����������
Time::Time(int hh, int mm)
{
    if (hh > 23 || hh < 0)
        hours = 0;
    else
        hours = hh;
    if (mm > 59 || mm < 0)
        mins = 0;
    else
        mins = mm;
};

// ����������� ������� settime
int Time::settime(int hh, int mm)
{
    if (hh > 23 || hh < 0)
        return 1;
    if (mm > 59 || mm < 0)
        return 2;

    hours = hh;
    mins = mm;

    return 0;
};

// ����������� ������� gethours
int Time::gethours(void)
{
    return hours;
};

// ����������� ������� getmins
int Time::getmins(void)
{
    return mins;
};

// ����������� ������� gettime
void Time::gettime(char* rr)
{
    // ��������� ������ ��������
    //  � ������ rr
    char w[3];

    itoa(hours, rr, 10);
    strcat(rr, ":");
    itoa(mins, w, 10);
    strcat(rr, w);

    return;
};
// ����������� ������� print
void Time::print()
{
    // ��������� ������ ��������
    //  � ������ S
    char w[3];

    itoa(hours, s, 10);
    strcat(s, ":");
    itoa(mins, w, 10);
    strcat(s, w);
    cout << s << endl;
    return;
}