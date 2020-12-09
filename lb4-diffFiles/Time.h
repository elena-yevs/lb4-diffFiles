#pragma once
#include <conio.h>
#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

class Time
{
private:
    int hours;
    int mins;
    char s[6];
public:
    Time();
    Time(int, int);
    int settime(int, int);
    int gethours(void);
    int getmins(void);
    void gettime(char*);
    virtual void print();
};



