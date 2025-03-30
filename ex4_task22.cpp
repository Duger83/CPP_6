//k и m показывают четность/нечетность (они равны то +1, то -1), и в зависимотси от того
//четная или нечетная ли это строка (k) и четный или нечетный это элемент в строке (m) мы и 
//печатаем пробели или *

#include <iostream>
using namespace std;
int main()
{
	int a, k, p, m;
	cin >> a;
  k=1;
    for (int i=1; i<=a; i++)
    {
        m=1;
        for (int j=1; j<=a; j++)
        {
          if (k==1) 
           {if (m==-1) cout << " ";
            else cout << "*";
           }
          else 
           {
            if (m==1) cout << " ";
            else cout << "*";
           }
          m=m*(-1);
        }
        cout << endl;
        k=k*(-1);
    };
}