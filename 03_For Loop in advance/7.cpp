// Print n’th Fibonacci number.

#include <iostream>
using namespace std;

int main()
{
    int last, current, previous, n;
    last = 0;
    previous = 1;

    cout << "Enter your number: ";
    cin >> n;

    if (n == 1)
    {
        cout << "The " << n << "th" << " Fibonacci number is: " << last << endl;
    }
    else if (n == 2)
    {
        cout << "The " << n << "th" << " Fibonacci number is: " << previous << endl;
    }
    else
    {

        for (int i = 3; i <= n; i++)
        {
            current = last + previous;
            last = previous;
            previous = current;
        }
        cout << "The " << n << "th" << " Fibonacci number is: " << current << endl;
    }
    return 0;
}
