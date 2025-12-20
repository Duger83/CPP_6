#include <iostream>
using namespace std;

int main() {

  int i, j, n, max, ch, s;
  cin >> n;
  max=1;
  ch=1;
  for (i=1; i<=n; i++)
   {
      s=0; 
      for (j=1; j<=i; j++)
      {
          if (i%j==0) s++;
      }
      if (s>max) {ch=i; max=s;}
   }
   cout << ch << endl << max;
}