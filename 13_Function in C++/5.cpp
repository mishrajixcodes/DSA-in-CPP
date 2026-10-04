/*Print “Hello Coder Army” n times using Function*/

#include <iostream>
using namespace std;

void Print_n_Times(int n)
{
    int i = 1;
    while (i <= n)
    {
        cout << i << ": Hello Coder Army" << endl;
        i++;
    }
}

int main()
{
    int n;
    cout << "Enter how many times: ";
    cin >> n;
    Print_n_Times(n);
}
