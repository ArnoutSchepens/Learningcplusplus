

#include <iostream>
#include "include/MyClass.h"
#include "include/Birthday.h"
#include "include/Person.h"
#include "include/FriendClass.h"
#include "include/ThisClass.h"
#include "include/Overloading.h"

using namespace std;

int main()
{
	MyClass obj;
	obj.myPrint();
	MyClass* ptr = &obj;
	ptr -> myPrint();
	
	const int x = 42;
	
	const MyClass objConst;
	objConst.myPrintConst();
	obj.myPrintConst();
	
	MyClass objMembInit1(42, 33);
	MyClass objMembInit2(24, 10);
	
	
	
	/*
	 * Composition
	 */
	Birthday birthdayTest(12, 31, 1990);
	Person testPerson("Firstname Lastname", birthdayTest);
	testPerson.printInfo();
	
	
	
	/*
	 * The Friend Keyword
	 */
	FriendClass friendClass;
	someFunc(friendClass);
	
	
	
	/*
	 * The This Keyword
	 */
	ThisClass thisClass(24);
	thisClass.printInfo();
	
	
	
	/*
	 * Operator Overloading
	 */
	Overloading overloading1(12);
	Overloading overloading2(55);
	Overloading overloadingOperator = overloading1+overloading2;
	cout << overloadingOperator.getVar() << endl;
}