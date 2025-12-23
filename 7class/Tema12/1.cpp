#include<iostream>
using namespace std;
int main()
{
    int i, n, a[1000], p, o, z;
    cin>>n;
    p=0;
    o=0;
    z=0;
    for(i=0;i<n;i++)
   {
       cin >> a[i];
       if (a[i]>0) p++;
       if (a[i]<0) o++;
       if (a[i]==0) z++;
   } 
    cout << p <<endl << o << endl << z << endl;
   for (i=0; i<n; i++)
   {
       cout << a[i] << " ";
   }
}