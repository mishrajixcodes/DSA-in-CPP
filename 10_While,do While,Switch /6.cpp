/*Give a number n, find if it is prime or not, use a while loop and break here to solve it.*/

#include <iostream>
using namespace std;

int main()
{
    int n, i = 2;
    cout << "Enter your number: ";
    cin >> n;

    if (n <= 1)
    {
        cout << "Not a prime number";
        return 0;
    }

    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not a prime number";
            break;
        }

        i++;
    }
    if (i == n)
        cout << "Prime Number";

    return 0;
}
