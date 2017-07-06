
#ifndef CLASSESANDOBJECTS_BANKACCOUNT_H
#define CLASSESANDOBJECTS_BANKACCOUNT_H

#include <iostream>

using namespace std;

class BankAccount
{
  private:
	string name;
  
  public:
	string hello;
	
	BankAccount(string name);
	
	string getName();
	
	void setName(string name);
};

#endif //CLASSESANDOBJECTS_BANKACCOUNT_H
