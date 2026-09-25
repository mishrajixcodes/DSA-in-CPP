// Print Sum of square of first n natural number.

#include <iostream>
using namespace std;

int main()
{
    int i, n;
    int sum = 0;
    cout << "Enter your number: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        sum += i * i;
    }
    cout << "The Sum of squares are: "<<sum;
    return 0;
}