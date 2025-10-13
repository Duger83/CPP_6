#include<iostream>
using namespace std;
int main()
{
 int n;
 cin >> n;
 cout << n << " + " << n%10*10+n/10 <<" = "<<n + n%10*10+n/10;
}