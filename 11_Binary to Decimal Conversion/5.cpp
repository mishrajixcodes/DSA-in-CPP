/*Write a program to convert binary to Octal numbers*/
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
        mul *= 2;
    }
    // cout << ans << endl;

    int n2 = ans, mul2 = 1, rem2, ans2 = 0;

    while (n2)
    {
        rem2 = n2 % 8;
        n2 /= 8;
        ans2 += rem2 * mul2;
        mul2 *= 10;
    }
    cout << ans2 << endl;
}
