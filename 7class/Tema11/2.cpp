#include <iostream>
using namespace std;

int main() {

  int i, j, h;
  cin >> h;
  for (i=1; i<=h; i++)
   {
      for (j=1; j<=i; j++)
      {
          cout << i%10;
      }
      cout << endl;
   }
}