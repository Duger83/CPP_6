#include <iostream>
using namespace std;
int main()
{
	int a, k;
	cin >> a;
  k=1;
    for (int i=1; i<=a; i++)
    {
        for (int j=1; j<=a/2; j++)
        {
          if (k==1) {cout << "*" << " ";}
          else {cout << " " << "*";};
        };
        cout << endl;
        k=k*(-1);
    };
}