#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a;
    b = 0;
    do
    {
        a = a / 10; 
        b = b + 1;
    }
    while (a > 0);
    cout << b;
}