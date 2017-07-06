
#include "../include/Person.h"

Person::Person(string name, Birthday birthday) : name(name), birthday(birthday)
{

}

void Person::printInfo()
{
	cout << "Name: " << name << endl;
	birthday.printDate();
}
