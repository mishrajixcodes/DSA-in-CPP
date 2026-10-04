/*Given two numbers n, r. Find nCr (Combination). Use Function here.*/

#include <iostream>
using namespace std;

int fact(int n)
{
    int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}

int main()
{
    int n, r;
    cout << "Enter your n: ";
    cin >> n;
    cout << "Enter your r: ";
    cin >> r;

    cout << "nCr=" << fact(n) / (fact(r) * fact(n - r)) << endl;
}
