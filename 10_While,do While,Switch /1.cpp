/*Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;

    // using while loop
    // int i = 1;
    // while (i <= n)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << i << " ";
    //     }
    //     i++;
    // }

    // using do while loop
    int i = 1;
    do
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;
    } while (i <= n);

    return 0;
}
