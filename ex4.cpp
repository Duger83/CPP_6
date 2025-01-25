#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a;
    b = 0;
	while  (a != 0)
	{
      if (a % 3 == 0) b = b + 1;
      cin >> a;
    }
    cout << b;	
}