#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, n;
    int basil_have, basil_need, bill;
	cin >> n >> a >> b >> c >> d;
    basil_have = a * 100 + b;
    basil_need = (c * 100 + d) * (n + 1);
    bill = basil_have - basil_need;
	if (bill >= 0) 
        cout << "Yes\n" << bill / 100 <<" "<< bill % 100; 
	else 
        cout << "No";
}