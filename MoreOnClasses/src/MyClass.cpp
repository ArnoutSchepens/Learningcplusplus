
#include <iostream>
#include "../include/MyClass.h"

using namespace std;

MyClass::MyClass() : varConst(0)
{
	cout << "Constructor" << endl;
}

MyClass::MyClass(int a, int b) : var(a), varConst(b)
{
	cout << "var = " << var << ", varConst = " << varConst << endl;
}

MyClass::~MyClass()
{
//	cout << "Destructor" << endl;
}

void MyClass::myPrint()
{
	cout << "Hello from myPrint" << endl;
}

void MyClass::myPrintConst() const
{
	cout << "Hello from myPrintConst!" << endl;
}
