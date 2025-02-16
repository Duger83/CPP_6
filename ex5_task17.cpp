#include <iostream>
using namespace std;
int main()
{
	int a, b, flag, s;
    flag = 0;
    s = 0;
	cin >> a;
    do
    {
        b = a % 10;
        if (flag == 1) if (b == 0) s = s + 1;
        if (b != 0) flag = 1;
        a = a / 10;
    }
    while (a > 0);
    cout << s;
}