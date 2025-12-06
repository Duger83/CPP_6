using namespace std;

int main() {

  long long n, i, s;
  cin >> n;
  s=0;
  for (i=1; i<=n; i++)
   {
      s=s+(2*i-1);
      cout << 2*i-1;
      if (i<n) cout << " + ";
   }
  cout << endl << s; 
}