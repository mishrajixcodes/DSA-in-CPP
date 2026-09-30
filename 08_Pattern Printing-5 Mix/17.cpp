#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        // space
        for (int col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }

        // first letter traingle
        char name = 'A';
        for (int col = 1; col <= row; col++)
        {
            cout << name << " ";
            name++;
        }

        // second letter traingle
        char name2 = name - 2;
        for (int col = 1; col <= row - 1; col++)
        {
            cout << name2 << " ";
            name2--;
        }

        cout << endl;
    }
    return 0;
}
