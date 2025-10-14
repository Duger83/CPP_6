#include<iostream>
using namespace std;
int main()
{
 int w, a, b;
 cin >> w >> a >> b;
 if (a+a*b+a*(b-1)<=w) {cout << "Yes\n";} else {cout << "No\n";}
 cout << a+a*b+a*(b-1); 
}