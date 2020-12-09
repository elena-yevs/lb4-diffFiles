#include "FullTime.h"
#include "Time.h"

// первый конструктор
FullTime::FullTime()
{
    secs = 0;
};

// второй конструктор
FullTime::FullTime(int hh, int mm, int ss) :Time(hh, mm)
{
    if (ss >= 0 && ss < 60)
        secs = ss;
    else
        ss = 0;
};

// определение функции setsecs
int FullTime::setsecs(int ss)
{
    if (ss > 59 || ss < 0)
        return 1;

    secs = ss;
    return 0;
};

// определение функции getsecs
int FullTime::getsecs(void)
{
    return secs;
};

// определение функции gettime
void FullTime::gettime(char* rr)
{
    char w[3];

    Time::gettime(rr);
    strcat(rr, ":");
    itoa(secs, w, 10);
    strcat(rr, w);

    return;
};

// определение функции print
void FullTime::print()
{
    // занесение нового значения
    //  в строку S
    char w[3];

    Time::gettime(ss);
    strcat(ss, ":");
    itoa(secs, w, 10);
    strcat(ss, w);
    cout << ss << endl;
    return;
}