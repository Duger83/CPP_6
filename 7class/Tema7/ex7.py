using namespace std;

int main() {
  int n, s, a1, i;
    
  cin >> n >> s;
  a1=s/n-n+1;
  i=0;
  while (i<n) 
    {
       if (i<n-1) cout << a1 << " ";
       else cout << a1;
       a1=a1+2;
       i++;
    }  
}