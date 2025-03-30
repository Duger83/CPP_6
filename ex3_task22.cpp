#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
    for (int i=1; i<=a; i++)
    {
        for (int j=1; j<=b; j++)
        {
          if (i==1) cout << "*";
          if (i==a) cout << "*";
          if (i>1)
            if(i<a)
             {
              if (j==1) cout << "*";
              else 
                {
                  if (j==b) cout << "*";
                  else {cout << " ";}
                }
             }    
        }
        cout << endl;
    }
}