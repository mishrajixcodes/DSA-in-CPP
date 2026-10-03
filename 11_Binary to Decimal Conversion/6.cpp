/*Write a program to convert Octal numbers to binary numbers*/
#include <iostream>
using namespace std;

int main()
{
    int n, rem, ans = 0, mul = 1;
    cout << "Enter your number: ";
    cin >> n;

    while (n)
    {
        rem = n % 10;
        n /= 10;
        ans += rem * mul;
        mul *= 8;
    }
    int n2 = ans, rem2, mul2 = 1, ans2 = 0;
    while (n2)
    {
        rem2 = n2 % 2;
        ans2 += rem2 * mul2;
        mul2 *= 10;
        n2 /= 2;
    }
    cout << ans2 << endl;
}
