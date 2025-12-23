#include<iostream>
using namespace std;
int main()
{
    int i, n, a[1000], min;
    cin>>n;
    min=10000;
    for(i=0;i<n;i++)
   {
       cin >> a[i];
       if (a[i]<min) min=a[i];
   } 
    cout << min <<endl;
   for (i=0; i<n; i++)
   {
       cout << a[i] << " ";
   }
}