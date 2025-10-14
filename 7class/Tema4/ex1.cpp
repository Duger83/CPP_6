#include<iostream>
using namespace std;
int main()
{
 int n, a, b;
 cin >> n;
 a = n/10;
 b = n%10;
 if (a>b) {cout << a;} else {cout << b;} 
}