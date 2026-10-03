/*Write a program to convert decimal numbers to binary numbers using a for loop.*/

#include <iostream>
using namespace std;

int main()
{
    int n, rem, ans = 0, mul = 1;
    cout << "Enter your number: ";
    cin >> n;

    for (; n;)
    {
        rem = n % 2;
        ans += rem * mul;
        mul *= 10;
        n /= 2;
    }
    cout << ans << endl;
}
