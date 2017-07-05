#include <iostream>

using namespace std;

int main() {
    //Comment a single line

    /*
     * Comment that spans
     * multiple lines
     */

    /* Comment out printing of Hello world!

       cout << "Hello World!"; //Prints Hello World!

     */

    cout << "Hello\n\nWorld!\nI love programming!\n";


    int myVariable = 10;
    cout << "myVariable = " << myVariable << endl;


    int a, b;
    a = 30;
    b = 15;
    int sum = a + b;
    cout << a << " + " << b << " = " << sum;


    int num1, num2;
    cout << "\nPlease enter a number for num1: ";
    cin >> num1; //There is already an endl after cin
    cout << "Please enter a number for num2: ";
    cin >> num2;
    cout << "num1 + num2 = " << num1 + num2 << endl;


    int c = 15;
    int d = c;
    cout << "d = " << d << endl;

    int e = 100;
    e = 50;
    cout << "e = " << e << endl;

    int f = 100 - 60;
    cout << "100 - 60 = " << f << endl;

    int g = 5 * 6;
    cout << "5 * 6 = " << g << endl;

    int h = 10 / 3;
    cout << "10 / 3 = " << h << endl;

    int i = 25 % 7;
    cout <<  "25 % 7 = " << i << endl;



    return 0;
}

