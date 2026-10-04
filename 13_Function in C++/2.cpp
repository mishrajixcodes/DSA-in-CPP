/*Reverse a number n using Function, Constraints: -5000<=n<=5000*/

#include <iostream>
using namespace std;

int ReverseNum(int n)
{
    if (n > 5000 || n < -5000)
    {
        cout << "Number out of range!" << endl;
        return 0;
    }

    int ans = 0, rem;
    while (n)
    {
        rem = n % 10;
        n /= 10;
        ans = ans * 10 + rem;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;
    cout << "Reverse number: " << ReverseNum(n) << endl;
}
