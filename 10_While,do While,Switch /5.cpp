/*Print all the Capital and small letters  using a while loop. It means A-Z, then a-z*/
#include <iostream>
using namespace std;

int main()
{
    char i = 'A';
    while (i <= 'Z')
    {
        cout << i << " ";
        i++;
    }
    cout << endl;

    i = 'a';
    while (i <= 'z')
    {
        cout << i << " ";
        i++;
    }

    cout << endl;
    return 0;
}
