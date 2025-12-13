using namespace std;

int main() {

  int a, b, i, max, nod;
  cin >> a >> b;
  nod=1;
  if (a>b) max=a; else max=b;
  for (i=2; i<=max; i++)
   {
      if (a%i==0 && b%i==0) nod=i;
   }
  cout << nod;
}