using namespace std;

int main() {

  int n, i, k;
  cin >> n;
  k=0;
  for (i=1; i<n; i++)
   {
      if (n%i==0) k=k+i;
   }
  if (k==n) cout << "Yes"; else cout << "No";
}