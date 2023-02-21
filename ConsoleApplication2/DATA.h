#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <conio.h>
#include <fstream>
#include <string>
#include "Chel.h"
using namespace std;
class DATA
{
private:
	int day;
	int month;
	int year;
public:
	DATA(int newday, int newmonth, int newyear) :
		day{ newday },
		month{ newmonth },
		year{ newyear } {}
	int getday() { return day; }
	int setday(int newday) { day = newday; }
	int getmonth() { return month; }
	int setday(int newmonth) { month = newmonth; }
	int getyear() { return year; }
	int setday(int newyear) { year = newyear; }

	void print() { cout << day << month << year; }
};

