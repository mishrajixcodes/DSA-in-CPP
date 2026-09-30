#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    // upper
    for (int row = 1; row <= n; row++)
    {
        // star
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        // space
        for (int col = 1; col <= (2 * n) - 2 * row; col++)
        {
            cout << "  ";
        }

        // star
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // lower
    for (int row = n - 1; row >= 1; row--)
    {
        // star
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        // space
        for (int col = 1; col <= (2 * n) - 2 * row; col++)
        {
            cout << "  ";
        }

        // star
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
