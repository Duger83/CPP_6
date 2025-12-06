using namespace std;

int main() {

  int n, i;
  cin >> n;
  for (i=1; i<=n; i++)
   {
      cout << 2*i-1;
      if (i<n) cout << " ";
   }
}