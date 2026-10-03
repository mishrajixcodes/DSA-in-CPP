/*Write a program to convert decimal numbers to Octal numbers.*/
#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0, rem, mul = 1;
    cout << "Enter your number: ";
    cin >> n;

    while (n)
    {
        rem = n % 8;
        n /= 8;
        ans += rem * mul;
        mul *= 10;
    }
    cout << ans << endl;
}
