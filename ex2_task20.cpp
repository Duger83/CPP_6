#include <iostream>
using namespace std;
int main()
{
	int i, a, b, k;
	cin >> a >> b;
    k=0;
    for (i=10; i<=99; i++)
    {
      if(i%a==0) 
       {
        if(i%b != 0) 
         {
            cout << i << " ";
            k++;
         };  
       };
    };
    if (k==0) cout << "NO";
}