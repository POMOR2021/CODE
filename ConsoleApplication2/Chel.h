#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <conio.h>
#include <fstream>
#include <string>
#include "DATA.h"
using namespace std;
class Chel
{
private:
	int nomer;
	char* Surname;
	char* name;
	char* otchestvo;
	DATA dataR;
public:
	Chel(char* newsurname, char* newname, char* newotchestvo, int newnomer, int day , int month, int year) :
		Surname{ new char [strlen(newsurname) + 1]}, name{new char[strlen(newname) + 1]}, otchestvo{new char[strlen(newotchestvo)]},nomer{newnomer},
		dataR{ day, month, year } {
		strcpy_s(Surname, strlen(newsurname) + 1, newsurname);
		strcpy_s(name, strlen(newname) + 1, newname);
		strcpy_s(otchestvo, strlen(newotchestvo) + 1, newotchestvo);
	}
	Chel() : Chel("Петров", "Сергей", "Васильевич", 998, 12, 1, 1885 ) {}

	void printALL()
	{
		cout << "Фамилия" << Surname << '\n' << "Имя" << name << '\n' << "Отчество" << otchestvo << '\n' << "Номер" << nomer << '\n' << "Дата рождения"; dataR.print();
	}
};

