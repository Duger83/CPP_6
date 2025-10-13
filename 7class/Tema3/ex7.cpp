#include<iostream>
using namespace std;
int main()
{
 long long a;
 cin >> a;
 cout << (a-1)/20+1 << " " << ((a-1)%20)/4+1;
}