#include <iostream>
//#include <cstdlib>
//#include <ctime>

using namespace std;

//Function declaration
void printSomething();

void printSomething(int i);

int timesTwo(int i);

int addNumbers(int x, int y);

int addNumbers(int x, int y, int z, int w);

int main()
{
	/*
	 * Introduction to Functions
	 */
	printSomething();



	/*
	 * Function parameters
	 */
	int x = 5;
	printSomething(x);
	printSomething(42);
	cout << "timesTwo(8): " << timesTwo(8) << endl;
	cout << "timesTwo(5): " << timesTwo(5) << endl;
	cout << "timesTwo(42): " << timesTwo(42) << endl;



	/*
	 * Functions with Multiple Parameters
	 */
	cout << "addNumbers(2, 6): " << addNumbers(2, 6) << endl;
	int sum = addNumbers(50, 25);
	cout << "sum: " << sum << endl;

	sum = addNumbers(25, 50, 75, 100);
	cout << "sum: " << sum << endl;



	/*
	 * The rand() function
	 */
	cout << "rand(): "  << rand();
	for(int i = 0; i < 10; i++)
	{
		cout << rand() << endl;
	}

	//Generate random numbers within a specific range (here: 1-6) with the modulo operator
	for(int i = 0; i < 10; i++)
	{
		cout << 1 + (rand() % 6) << endl;
	}

	srand(98);
	cout << "After srand(98)";
	for(int i = 0; i < 10; i++)
	{
		cout << 1 + (rand() % 6) << endl;
	}

	//Generate Truly Random Numbers
	srand(time(0));
	cout << "After srand(time(0))";
	for(int i = 0; i < 10; i++)
	{
		cout << 1 + (rand() % 6) << endl;
	}

}


/*
 * Introduction to Functions
 */
void printSomething()
{
	cout << "Hi there!" << endl;
}


/*
 * Function parameters
 */
void printSomething(int x)
{
	cout << "x = " << x << endl;
}

int timesTwo(int x)
{
	return x * 2;
}


/*
 * Functions with Multiple Parameters
 */
int addNumbers(int x, int y)
{
	return x + y;
}

int addNumbers(int x, int y, int z, int w)
{
	return x + y + z + w;
}
