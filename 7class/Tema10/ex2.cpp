using namespace std;

int main() {

  int n, i, k;
  cin >> n;
  k=0;
  for (i=2; i<n; i++)
   {
      if (n%i==0) k++;
   }
  if (k==0 && n!=1) cout << "Yes"; else cout << "No";
}