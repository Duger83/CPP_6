#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a;
    do
    {
        if (a < 10) cout << a % 10;
        else cout << a % 10 << ' ';
        a = a / 10;
    }
    while (a > 0);
}