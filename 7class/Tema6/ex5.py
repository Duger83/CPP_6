#include<iostream>
using namespace std;
int main() 
{ 
    int a,b,c;
    cin >> a >> b >> c;
    if((a+b>c)&&(a+c>b)&&(b+c>a)) 
     {
         if ((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b)) cout << "Rectangulal";
         else if ((a*a>b*b+c*c)||(b*b>a*a+c*c)||(c*c>a*a+b*b)) cout << "Obtuse";
              else cout << "Sharp";
     }
    else cout << "Invalid";
}