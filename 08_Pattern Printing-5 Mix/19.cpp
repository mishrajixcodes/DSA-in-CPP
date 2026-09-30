#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    //upper hollow
    for (int row = 1; row <= n; row++)
    {
        // star
        for (int col = 1; col <= (n - row) + 1; col++)
        {
            cout << "* ";
        }
        // space
        for (int col = 1; col <= (row * 2) - 2; col++)
        {
            cout << "  ";
        }
        // star
        for (int col = 1; col <= (n - row) + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // lower hollow
    for (int row = n; row >= 1; row--)
    {
        // star
        for (int col = 1; col <= (n - row) + 1; col++)
        {
            cout << "* ";
        }
        // space
        for (int col = 1; col <= (row * 2) - 2; col++)
        {
            cout << "  ";
        }
        // star
        for (int col = 1; col <= (n - row) + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
