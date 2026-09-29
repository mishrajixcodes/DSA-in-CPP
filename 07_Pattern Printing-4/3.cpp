/*Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
              A
            A B A
          A B C B A
        A B C D C B A
      A B C D E D C B A
*/

#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter number: ";
  cin>>n;

  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= n-row; col++)
    {
      cout<<"  ";
    }

    char name = 'A';
    for (int col = 1; col <= row; col++)
    {
      cout<<name<<" ";
      name++;
    }

    char name2 = name-2;
    for (int col = 1; col <= row-1; col++)
    {
      cout<<name2<<" ";
      name2--;
    }


    cout<<endl;

  }
return 0;
}
