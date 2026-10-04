/* Swap 2 numbers a, b without using extra variables. Range of
-10000<=a,b<=100000.*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    if (a > 100000 || a < -100000 || b > 100000 || b < -100000)
    {
        cout << "Number out of range!";
        return 0;
    };

    swap(a, b);
    cout << "Swap numbers: a=" << a << " b=" << b;
}
