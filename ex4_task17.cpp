#include <iostream>
using namespace std;
int main()
{
	int n, a, b, c, d, e, f;
	cin >> n >> a >> b;
    do
    {
        c = a % 10;
        d = (a / 10) % 10; 
        e = (a / 100) * 100 + c * 10 + d;
        f = a - e;
        if (f > 0) if (f % n == 0) cout << a << "\n";
        a = a + 1;
    }
    while (a <= b);
}