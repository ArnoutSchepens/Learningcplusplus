
#include <iostream>
#include "../include/ThisClass.h"

using namespace std;

ThisClass::ThisClass(int a) : var(a)
{

}

void ThisClass::printInfo()
{
	cout << var << endl;
	cout << this->var << endl;
	cout << (*this).var << endl;
}
