// Print Sum of cube of first n natural number

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
        sum += i * i * i;
    }
    cout <<"The sum of cubes are:"<< sum;
    return 0;
}