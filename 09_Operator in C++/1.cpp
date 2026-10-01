/*Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO. */

#include <iostream>
using namespace std;

int main()
{
    int temp;
    cout << "Enter Temperature: ";
    cin >> temp;

    if (temp > 70 && temp < 90)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
