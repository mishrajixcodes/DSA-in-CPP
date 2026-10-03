/*Write a program to convert Octal numbers to decimal numbers*/
#include <iostream>
using namespace std;

int main()
{
    int n,rem,ans=0,mul=1;
    cout<<"Enter your number: ";
    cin>>n;

    while (n)
    {
        rem = n % 10;
        n/=10;
        ans+= rem * mul;
        mul*=8;
    }
    cout<<ans<<endl;

}
