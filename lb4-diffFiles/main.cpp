#pragma once
#include "Time.h"
#include <conio.h>
#include <iostream>
#include "FullTime.h"
#include "TextTime.h"
#include "Time.cpp"
#pragma warning(disable : 4996)
using namespace std;



int main()
{
    Time t1(10, 10);
    FullTime tt1(20, 30, 40);
    t1.print();
    tt1.print();

    TextTime ttt1(11, 22, 33);
    ttt1.print();
    cout << "============" << endl;

    Time* ptrs[3];
    ptrs[0] = &t1;
    ptrs[1] = &ttt1;
    ptrs[2] = &tt1;

    for (int i = 0; i < 3; i++)
        ptrs[i]->print();
    cout << "============" << endl;

    ptrs[0] = new Time(15, 25);
    ptrs[1] = new FullTime(15, 25, 35);
    ptrs[2] = new TextTime(22, 33, 44);

    for (int i = 0; i < 3; i++)
        ptrs[i]->print();

    for (int i = 0; i < 3; i++)
        delete ptrs[i];
    _getch();
    return 0;
}
