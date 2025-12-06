using namespace std;

int main() {

  int n, i;
  cin >> n;
  for (i=1; i<=n; i++)
   {
       cout << i << " + " << n-i+1 << " = " << n+1;
       if (i<n) cout << endl;
   }
}