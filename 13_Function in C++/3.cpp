/*There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.*/

#include <iostream>
using namespace std;

void SwapNum(int &a, int &b, int &c)
{
    int un, un2;
    un = b;
    un2 = c;
    b = a;
    c = un;
    a = un2;
}

int main()
{
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    SwapNum(a, b, c);
    cout << "Swap numbers: a=" << a << " b=" << b << " c=" << c;
}
