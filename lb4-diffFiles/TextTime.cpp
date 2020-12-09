#include "TextTime.h"
#include "Time.h"

class TextTime : public Time
{
private:
    int secs;
    char ss[50];
public:
    TextTime();
    TextTime(int, int, int);
    int setsecs(int);
    int getsecs(void);
    void gettime(char*);
    virtual void print();
};

// ������ �����������
TextTime::TextTime()
{
    secs = 0;
};

// ������ �����������
TextTime::TextTime(int hh, int mm, int ss) :Time(hh, mm)
{
    if (ss >= 0 && ss < 60)
        secs = ss;
    else
        ss = 0;
};

// ����������� ������� setsecs
int TextTime::setsecs(int ss)
{
    if (ss > 59 || ss < 0)
        return 1;

    secs = ss;
    return 0;
};

// ����������� ������� getsecs
int TextTime::getsecs(void)
{
    return secs;
};

// ����������� ������� gettime
void TextTime::gettime(char* rr)
{
    char w[3];

    Time::gettime(rr);
    strcat(rr, ":");
    itoa(secs, w, 10);
    strcat(rr, w);

    return;
};

// ����������� ������� print
void TextTime::print()
{
    // ��������� ������ ��������
    //  � ������ S
    char w[3];

    itoa(gethours(), w, 10);
    strcpy(ss, w);
    strcat(ss, " hours ");
    itoa(getmins(), w, 10);
    strcat(ss, w);
    strcat(ss, " minutes ");
    itoa(secs, w, 10);
    strcat(ss, w);
    strcat(ss, " seconds ");
    cout << ss << endl;
    return;
}

