#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin>> a >> b;
    
	if (a <= 10) 
        cout << "0" << a <<":"; 
	else 
        cout << a <<":";
    if (b <= 10) 
        cout << "0" << b; 
    else 
        cout << b;   
}