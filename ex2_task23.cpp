#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
    for (int a=1; a<=n; a++)
    {
        for (int b=1; b<=n; b++)
        {
            for (int c=1; c<=n; c++)
            {
                if (a+b+c==n) cout << a << " + " << b << " + " << c << " = " << n << endl;
            }
        }
    }
}