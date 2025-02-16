#include <iostream>
using namespace std;
int main()
{
	int a, b, min;
	cin >> a;
    min = 10;
    do
    {
        b = a % 10;
        if (b % 2 == 0) if (b < min) min = b;
        a = a / 10;
    }
    while (a > 0);
    if (min == 10) cout << "NO";
    else cout << min;
}