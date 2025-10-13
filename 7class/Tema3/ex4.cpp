#include<iostream>
using namespace std;
int main()
{
 int a, b, c, d, x;
 cin >> a >> b >> c >> d;
 x=c*100+d-a*100-b;
 cout << x/100 <<" " << x%100;
}