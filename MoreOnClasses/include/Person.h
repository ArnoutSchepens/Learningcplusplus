
#ifndef MOREONCLASSES_PERSON_H
#define MOREONCLASSES_PERSON_H

#include "Birthday.h"
#include <iostream>

using namespace std;

class Person
{
  public:
	Person(string name, Birthday birthday);
	void printInfo();
	
  protected:
  
  private:
	string name;
	Birthday birthday;
};


#endif
