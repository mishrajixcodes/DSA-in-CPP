/*Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter your three numbers one by one: ";
    cin >> a;
    cin >> b;
    cin >> c;
    
    if (a > b || a > c)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}