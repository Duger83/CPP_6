#include<iostream>
using namespace std;
int main() 
{ 
    int a,b,c;
    cin >> a >> b >> c;
    if((a+b>c)&&(a+c>b)&&(b+c>a)) 
     {
         if(a==b&&b==c) cout<<"Equilateral";
         else if (a==b||a==c||b==c) cout<<"Isosceles";
              else cout<<"Scalene";
     }
    else cout<<"Invalid";
}