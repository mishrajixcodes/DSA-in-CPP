#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    //upper triangle
    for (int row = 1; row <= n; row++)
    {
        // spaces
        for (int col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }

        // star
        for (int col = 1; col <= (2 * row) - 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    //lower triangle
    for (int row = n; row >= 1; row--)
    {
        // spaces
        for (int col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }

        // star
        for (int col = 1; col <= (2 * row) - 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
