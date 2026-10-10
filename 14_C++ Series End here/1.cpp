// Convert any small character to capital character. eg: 'a' to 'A';

#include <iostream>
using namespace std;

char smallToCapital(char name)
{
    char ans;
    ans = name - 'a' + 'A';

    return ans;
}

int main()
{
    char name;
    cout << "Enter a Character: ";
    cin >> name;
    cout << smallToCapital(name) << endl;
}
