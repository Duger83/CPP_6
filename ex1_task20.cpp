#include <iostream>
using namespace std;
int main()
{
	int a, s, i, n;
	cin >> n ;
    s = 0;
    for (i=1; i<=n; i++)
    {
        cin >> a;
        if (a==0) s++;
    }
    if (s != 0)  cout << "YES";
    else cout << "NO";
}