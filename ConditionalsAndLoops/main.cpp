#include <iostream>

using namespace std;

int main()
{

	/*
	 * The if Statement
	 */
	if (7 > 4)
		cout << "7 > 4" << endl;

	if (10 == 10)
		cout << "10 == 10" << endl;

	if (10 != 5)
		cout << "10 != 5" << endl;

	int a = 55;
	int b = 33;
	if (a > b)
		cout << "a is greater than b" << endl;

	/*
	 * The else statement
	 */
	int mark = 90;
	if (mark < 50)
	{
		cout << "You failed" << endl;
		cout << "Sorry!" << endl;
	}
	else
	{
		cout << "Congratulations!" << endl;
		cout << "You passed!" << endl;
		if (mark == 100)
		{
			cout << "You are awesome!" << endl;
		}
	}

	int age = 14;
	if (age > 14)
	{
		if (age >= 18)
		{
			cout << "Adult" << endl;
		}
		else
		{
			cout << "Teenager" << endl;
		}
	}
	else
	{
		if (age > 0)
		{
			cout << "Child" << endl;
		}
		else
		{
			cout << "Something' wrongs";
		}
	}

	/*
	 * The while loop
	 */
	int num = 1;
	while (num < 6)
	{
		cout << "Number: " << num << endl;
		num++;
	}

	num = 1;
	while (num < 6)
	{
		cout << "Number: " << num << endl;
		num += 3;
	}

	/*
	 * Using a while Loop
	 */
	num = 1;
	int number;
	int total = 0;

	while (num <= 5)
	{
//		cin >> number;
		total += num;
		num++;
	}
	cout << total << endl;

	/*
	 * The for Loop
	 */
	for (int x = 1; x < 10; x++)
	{
		cout << "x = " << x << endl;
	}

	for (int x = 0; x < 50; x += 10)
	{
		cout << "x = " << x << endl;
	}

	for (int x = 10; x > 0; x -= 3)
	{
		cout << "x = " << x << endl;
	}

	/*
	 * The do...while Loop
	 */
	int c = 0;
	do
	{
		cout << "c = " << c << endl;
	}
	while (a < 5);

	int d = 42;
	do
	{
		cout << "d = " << d << endl;
	}
	while (a < 5);

	/*
	 * The switch Statement
	 */

	age = 42;
	switch (age)
	{
		case 16:
			cout << "Too yound" << endl;
			break;
		case 42:
			cout << "Adult" << endl;
			break;
		case 70:
			cout << "Senior" << endl;
			break;
	}

	age = 25;
	switch (age)
	{
		case 16:
			cout << "Too yound" << endl;
			break;
		case 42:
			cout << "Aduld" << endl;
			break;
		case 70:
			cout << "Senior" << endl;
			break;
		default:
			cout << "This is the default case";
	}

	/*
	 * Logical Operators
	 */
	age = 20;
	if(age > 16 && age < 60)
	{
		cout << "Accepted" << endl;
	}

	int grade = 80;
	if(age > 16 && age < 60 && grade > 50)
	{
		cout << "Accepted" << endl;
	}

	if(age > 21 || grade > 50)
	{
		cout << "Accepted" << endl;
	}

	if(!(age > 22))
	{
		cout << "Your age is less than 22" << endl;
	}

}