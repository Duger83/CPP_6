#include <iostream>
using namespace std;
int main()
{
	int n, i, a, b;
	cin >> n;
    for (i=10; i<=99; i++)
    {
      a=i%10;
      b=(i/10)%10;
      if(a+b==n) {cout << i << " ";};
    };
}