#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        // number
        for (int col = 1; col <= row; col++)
        {
            cout << col << " ";
        }

        // spaces
        for (int col = 1; col <= ((n * 2) - 2 * row); col++)
        {
            cout << "  ";
        }

        // number
        for (int col = row; col >= 1; col--)
        {
            cout << col << " ";
        }

        cout << endl;
    }
    return 0;
}
