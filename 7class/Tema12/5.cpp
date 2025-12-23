#include<iostream>
using namespace std;
int main()
{
    int i, n, a[10000], min, p;
    cin>>n;
    min=10000;
    p=0;
    for(i=0;i<n;i++)
   {
       cin >> a[i];
       if (a[i]<min) 
        {
            min=a[i];
        }    
   } 
   for (i=0; i<n; i++)
   {
       if (a[i]==min) p++;
   }
    cout << p <<endl;
   for (i=0; i<n; i++)
   {
       cout << a[i] << " ";
   }
}