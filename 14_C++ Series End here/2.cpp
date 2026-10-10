// Armstrong number

#include <iostream>
using namespace std;

int countDigit(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }

    return count;
}

bool armstrong(int n, int power)
{
    int rem, ans = 0, orig = n;
    while (n)
    {
        rem = n % 10;
        n /= 10;
        ans += pow(rem, power);
    }
    if (ans == orig)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int power = countDigit(n);
    cout << armstrong(n, power);
}
