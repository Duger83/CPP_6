using namespace std;

int main() {

  int n, i;
  cin >> n;
  for (i=1; i<=n; i++)
   {
      if (n%i==0) 
       {
           cout << i;
           if (i<n) cout << " ";
       }   
   }
  cout << endl;
  for (i=n; i>=1; i--)
   {
      if (n%i==0) 
       {
           cout << i;
           if (i>1) cout << " ";
       }   
}