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

int sumNumbers(int x, int y = 42);

int calculateVolume(int length = 1, int width = 1, int height = 1);

void printNumber(int number);

void printNumber(float number);

int factorial(int n);

void printArray(int arr[], int size);

void passByValue(int value);

void passByReference(int* valuePointer);

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
	cout << "rand(): " << rand();
	for (int i = 0; i < 10; i++)
	{
		cout << rand() << endl;
	}

	//Generate random numbers within a specific range (here: 1-6) with the modulo operator
	for (int i = 0; i < 10; i++)
	{
		cout << 1 + (rand() % 6) << endl;
	}

	srand(98);
	cout << "After srand(98)";
	for (int i = 0; i < 10; i++)
	{
		cout << 1 + (rand() % 6) << endl;
	}

	//Generate Truly Random Numbers
	srand(time(0));
	cout << "After srand(time(0))" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << 1 + (rand() % 6) << endl;
	}



	/*
	 * Default Arguments
	 */
	int a = 24;
	int b = 36;
	cout << "sumNumbers(24, 36) = " << sumNumbers(a, b) << endl;
	cout << "sumNumbers(24) = " << sumNumbers(a) << endl;

	cout << "calculateVolume() = " << calculateVolume() << endl;
	cout << "calculateVolume(5) = " << calculateVolume(5) << endl;
	cout << "calculateVolume(2, 3) = " << calculateVolume(2, 3) << endl;
	cout << "calculateVolume(3, 7, 6) = " << calculateVolume(3, 7, 6) << endl;



	/*
	 * Function Overloading
	 */
	int c = 16;
	float d = 54.541;
	printNumber(c);
	printNumber(d);



	/*
	 * Recursion
	 */
	cout << "factorial(5) = " << factorial(5) << endl;



	/*
	 * Passing Arrays to Functions
	 */
	int myArr[3] = {42, 33, 88};
	printArray(myArr, 3);



	/*
	 * Pass by Reference with Pointers
	 */
	int passValue = 20;
	passByValue(passValue);
	cout << "passByValue(passValue) = " << passValue << endl;
	int passReference = 20;
	passByReference(&passReference);
	cout << "passByReference(passReference) = " << passReference << endl;

}



//FUNCTIONS

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

int sumNumbers(int x, int y)
{
	return x + y;
}

int calculateVolume(int length, int width, int height)
{
	return length * width * height;
}

void printNumber(int number)
{
	cout << "printNumber(int) = " << number << endl;
}

void printNumber(float number)
{
	cout << "printNumber(float) = " << number << endl;
}

int factorial(int n)
{
	if (n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}

void printArray(int arr[], int size)
{
	for (int x = 0; x < size; x++)
	{
		cout << "arr[x] = " << arr[x] << endl;
	}
}

void passByValue(int value)
{
	value = 100;
}


void passByReference(int* valuePointer)
{
	*valuePointer = 100;
}