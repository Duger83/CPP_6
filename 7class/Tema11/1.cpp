#include <iostream>
using namespace std;

int main() {

  int i, j, w, h;
  cin >> w >> h;
  for (i=1; i<=h; i++)
   {
      for (j=1; j<=w; j++)
      {
          cout << i%10;
      }
      cout << endl;
   }
}