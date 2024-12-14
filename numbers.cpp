#include <iostream>
using namespace std;
int main()
{
    int a; 
	cin >> a;
    int des = (a / 10) % 10;
	if (des == 0) 
        cout << (a / 100) % 100 << a % 10;
    else
        cout << a;  
}