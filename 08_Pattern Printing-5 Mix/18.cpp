#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        char name = 'A' + (n - row);
        for (int col = 1; col <= row; col++)
        {
            cout << name << " ";
            name++;
        }
        cout << endl;
    }
    return 0;
}
