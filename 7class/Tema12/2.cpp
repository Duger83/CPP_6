
#include<iostream>
using namespace std;
int main()
{
    int i, n, a[1000], p, o;
    cin>>n;
    p=0;
    o=0;
    for(i=0;i<n;i++)
   {
       cin >> a[i];
       if (a[i]>0) p=p+a[i];
       if (a[i]<0) o=o+a[i];
   } 
    cout << p <<endl << o << endl;
   for (i=0; i<n-1; i++)
   {
       cout << a[i] << " ";
   }
   cout << a[n-1];
}