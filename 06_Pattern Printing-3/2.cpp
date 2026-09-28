/*Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
        A
      B B
    C C C
  D D D D
E E E E E
*/

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter number: ";
  cin >> n;
  char name = 'A';

  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= n - row; col++)
    {
      cout << "  ";
    }
    for (int col = 1; col <= row; col++)
    {
      cout << name << " ";
    }
    name++;
    cout << endl;
  }
  return 0;
}
