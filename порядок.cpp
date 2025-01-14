#include <iostream>
using namespace std;
int main()
{
   int a, b, c, i, m1, m2, m3, n;
   cin >> n;
   a = n % 10;
   b = (n / 10) % 10;
   c = (n / 100) % 10;

   m1 = a;
   i = 1;
   if (b <= m1) {m1 = b; i = 2;};
   if (c <= m1) {m1 = c; i = 3;};    
   if (i==1) a = 10;
   if (i==2) b = 10;
   if (i==3) c = 10;
 
   m2 = a;
   i = 1;
   if (b <= m2) {m2 = b; i = 2;};
   if (c <= m2) {m2 = c; i = 3;};    
   if (i==1) a = 10;
   if (i==2) b = 10;
   if (i==3) c = 10;
    
   m3 = a;
   if (b <= m3) m3 = b;
   if (c <= m3) m3 = c;       
   
   cout << m1 << " " << m2 << " " << m3;
} 