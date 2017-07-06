
#include <iostream>
#include "../include/FriendClass.h"

using namespace std;

FriendClass::FriendClass()
{
	regVar = 0;
}

void someFunc(FriendClass &obj)
{
	obj.regVar = 42;
	cout << obj.regVar << endl;
}
