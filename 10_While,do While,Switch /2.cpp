/*Find the factorial of a number n using a while loop and do a while loop.*/

#include <iostream>
using namespace std;

int main()
{
    int n, fact;
    cout << "Enter your number: ";
    cin >> n;

    // using while loop
    //  int i = 1;
    //  while (i <= n)
    //  {
    //      fact *= i;
    //      i++;
    //  }
    //  cout<<"The factorial of a number "<<n<<" is: "<<fact;

    // using do-while loop
    int i = 1;
    do
    {
        fact *= i;
        i++;
    } while (i <= n);
    cout << "The factorial of a number " << n << " is: " << fact;
    return 0;
}
