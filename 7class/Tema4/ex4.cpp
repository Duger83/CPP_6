#include<iostream>
using namespace std;
int main()
{
 int p, m;
 cin >> p >> m;
 if (p>m) cout << "Father";
 if (p<m) cout << "Mother";
 if (p==m) cout << "Same";
}