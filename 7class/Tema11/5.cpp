#include <iostream>
using namespace std;

int main() {

  long long i, j, b, flag;
  cin >> b;
  do
  {
    flag=0;
    for (i=2; i<=9; i++)
    {
        if ((b != 0)&&(b%i==0)) {b=b/i; flag=1;}
    }
  } while (flag==1);
 
  if (b<10) cout << "Yes";
  else cout << "No";
}