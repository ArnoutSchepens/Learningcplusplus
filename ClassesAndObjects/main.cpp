
#include <iostream>
#include "include/BankAccount.h"

using namespace std;

int main()
{
	BankAccount bankAccount1("Dewi");
	BankAccount bankAccount2("Arnout");
	cout << "After constructing bankAccount1, the name is " << bankAccount1.getName() << endl;
	cout << "After constructing bankAccount2, the name is " << bankAccount2.getName() << endl;
	bankAccount1.hello = "Learning C++";
	cout << "bankAccount.hello = " << bankAccount1.hello << endl;
	bankAccount1.setName("Still Dewi");
	cout << "bankAccount.getName() = " << bankAccount1.getName() << endl;
}