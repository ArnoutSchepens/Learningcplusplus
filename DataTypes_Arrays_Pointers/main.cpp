#include <iostream>
//#include <string> //Is already included in iostream
using namespace std;

int main()
{
	/*
	 * Introduction to Data Types
	 */
	//Signed can hold both negative and positive numbers => standard value
	//Unsigned can hold only positive values
	//Long can hold twice the default size
	//Short can hold half of the default size

	//int
	signed long int a; // = long int a;
	signed short int b; // = short int b;
	signed int c; // = int c;
	unsigned long int d;
	unsigned short int e;
	unsigned int f;


	//Floating point data types are always signed
	//float
	float g;
	//double
	double h;
	long double j;

	//string (needs #include<string>)
	string k = "I am learning C++";
	cout << "string k = " << k << endl;

	//char
	char l = 'S';
	cout << "char l = " << l << endl;

	//bool
	bool online = false;
	bool logged_in = true;
	cout << "online = " << online << ", logged_in = " << logged_in << endl;



	/*
	 * Arrays
	 */
	int m[5];
	int n[5] = {11, 45, 62, 70, 88};
	int o[] = {11, 45, 62, 70, 88}; //This creates an array of size 5

	cout << n[0] << endl;

	cout << n[4] << endl;
	n[4] = 12;
	cout << n[4] << endl;



	/*
	 * Using Arrays in Loops
	 */
	int p[5];
	for (int number = 0; number < 5; number++)
	{
		p[number] = 42;
		cout << p[number] << endl;
	}



	/*
	 * Arrays in Calculations
	 */
	int q[] = {11, 35, 62, 555, 989};
	int sum = 0;
	for (int number = 0; number < 5; number++)
	{
		sum += q[number];
	}
	cout << sum << endl;

	int r[3][4] = {
			{1, 2, 3},
			{7, 8, 9}
	};
	cout << r[0][2] << endl;



	/*
	 * Introduction to Pointers
	 */
	int score = 5;
	cout << &score << endl;

	int* ip; //pointer to an integer
	double* dp; //Pointer to a double
	float* fp; //Pointer to a float
	char* cp; //Pointer to a char

	int* scorePtr;

	scorePtr = &score;

	cout << "scorePtr = " << scorePtr << ", &score = " << &score << endl;



	/*
	 * More on Pointers
	 */
	int var = 50;
	int* varPtr;
	varPtr = &var;

	cout << "var = " << var << endl;
	cout << "varPtr = " << varPtr << endl;
	cout << "*varPtr = " << *varPtr << endl;

	int x = 5;
	int* y = &x;
	cout << "x += 4 => " << (x += 4) << endl;
	cout << "x = *y + 4 => " << (x = *y + 4) << endl;
	cout << "*y += 4 => " << (*y += 4) << endl;



	/*
	 * Dynamic Memory
	 */
	new int;

	int* heapIntPtr = new int;
	*heapIntPtr = 5;
	cout << "heapIntPtr = " << heapIntPtr << ", *heapIntPtr = " << *heapIntPtr << endl;

	delete heapIntPtr;
	cout << "heapIntPtr = " << heapIntPtr << ", *heapIntPtr = " << *heapIntPtr << endl;

	heapIntPtr = new int;
	cout << "heapIntPtr = " << heapIntPtr << ", *heapIntPtr = " << *heapIntPtr << endl;

	int *nullPtr = NULL;
	nullPtr = new int[20];
	delete [] nullPtr;



	/*
	 * The sizeof() Operator
	 */
	cout << "bool: " << sizeof(bool) << endl;
	cout << "char: " << sizeof(char) << endl;
	cout << "short: " << sizeof(short) << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "long: " << sizeof(long) << endl;
	cout << "long long: " << sizeof(long long) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "double: " << sizeof(double)<< endl;
	cout << "long double: " << sizeof(long double) << endl;

	int variable = 50;
	cout << "variable: " << sizeof(variable) << endl;

	double myArr[10];
	cout << "myArr[10]: " << sizeof(myArr) << endl;

	int numbers[100];
	cout << "numbers[100]: " << sizeof(numbers) << endl;
	cout << "Amount of elements in numbers: " << sizeof(numbers) / sizeof(numbers[0]) << endl;
}
