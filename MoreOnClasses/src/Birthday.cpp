
#include <iostream>
#include "../include/Birthday.h"

using namespace std;

Birthday::Birthday(int month, int day, int year) : month(month), day(day), year(year)
{

}

void Birthday::printDate()
{
	cout << month << "/" << day << "/" << year << endl;
}
