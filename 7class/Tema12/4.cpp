#include<iostream>
using namespace std;
int main()
{
    int i, n, a[1000], max, p;
    cin>>n;
    max=-10000;
    p=-1;
    for(i=0;i<n;i++)
   {
       cin >> a[i];
       if (a[i]>max) 
        {
            max=a[i];
            if(p==-1) p=i;
        }    
   } 
    cout << p <<endl;
   for (i=0; i<n; i++)
   {
       cout << a[i] << " ";
   }
}