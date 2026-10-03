/*Write a program to convert binary numbers to decimal numbers using a for loop.*/

#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0, rem, mul = 1;
    cout << "Enter your number: ";
    cin >> n;

    // while (n)
    // {
    //     rem = n % 10;
    //     ans += rem * mul;
    //     mul *= 2;
    //     n = n / 10;
    // }
    // cout << ans;

    for (; n;)
    {
        rem = n % 10;
        ans += rem * mul;
        mul *= 2;
        n = n / 10;
    }
    cout << ans << endl;
}
