#include <iostream>
using namespace std;
int main()
{
	int a, b, i, n;
	cin >> n ;
    i = 0;
    for (b = 1; b <= n; b = b + 1)
    {
        cin >> a;
        if (a % 2 == 0) i = i + 1;
    }
      cout << i;
}