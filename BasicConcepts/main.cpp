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


    /*int num1, num2;
    cout << "\nPlease enter a number for num1: ";
    cin >> num1; //There is already an endl after cin
    cout << "Please enter a number for num2: ";
    cin >> num2;
    cout << "num1 + num2 = " << num1 + num2 << endl;
*/

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

    int j = 5 + 2 * 2;
    cout << "j = " << j << endl;

    int k = (5 + 2) * 2;
    cout << "k = " << k << endl;

    int l = 10;
    l += 4;
    cout << "l += 4 = " << l << endl;
    l -= 5;
    cout << "l -= 5 = " << l << endl;
    l *= 3;
    cout << "l *= 3 = " << l << endl;
    l /= 2;
    cout << "l /= 2 = " << l << endl;
    l %= 4;
    cout << "l %= 4 = " << l << endl;

    int m = 0;
    m++;x
    cout << "m = 0, after m++: m = " << m << endl;

    int n = 5;
    int o = ++n;
    cout << "n = " << n << ", o = " << o << endl;

    int p = 5;
    int q = p++;
    cout << "p = " << p << ", q = " << q << endl;

    int r = 0;
    r--;
    cout << "m = 0, after m++: m = " << m << endl;

    int s = 5;
    int t = --s;
    cout << "s = " << s << ", t = " << t << endl;

    int u = 5;
    int v = u--;
    cout << "u = " << u << ", v = " << v << endl;

    return 0;
}

