#include <iostream>
using namespace std;
int main()
{
	int a, b, i, j, k, p;
	cin >> a >> b;
    if (a < b) 
     {
        for (i = a; i <= b; i++)
         {
            cout << i << " ";
         };
     }
    else 
     {
        for (i = a; i >= b; i--)
        {
           cout << i << " ";
        };  
     };
}