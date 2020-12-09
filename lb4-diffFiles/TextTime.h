#pragma once
#include <Time.h>
#include <conio.h>
#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

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

