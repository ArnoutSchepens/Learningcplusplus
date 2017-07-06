
#include "../include/BankAccount.h"

BankAccount::BankAccount(string name)
{
	setName(name);
}

void BankAccount::setName(string name)
{
	BankAccount::name = name;
}

string BankAccount::getName()
{
	return BankAccount::name;
}