/*Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
        E
      E D
    E D C
  E D C B
E D C B A
*/

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter number: ";
  cin >> n;

  for (int row = 1; row <= n; row++)
  {
    char name = 'E';
    for (int col = 1; col <= n - row; col++)
    {
      cout << "  ";
    }
    for (char col = n; col >= n - (row - 1); col--)
    {
      cout << name << " ";
      name--;
    }
    cout << endl;
  }
  return 0;
}
