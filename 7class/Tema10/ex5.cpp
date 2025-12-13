using namespace std;

int main() {

  int a1, b1, a2, b2, i, a3, b3, max;
  cin >> a1 >> b1 >> a2 >> b2;
  
  b3=b1*b2;
  a3=a1*b2+a2*b1;
  if (a3>b3) max=a3; else max=b3;
  for (i=max; i>=2; i--)
   {
      if (a3%i==0 && b3%i==0) {a3=a3/i; b3=b3/i;}
   }
  cout << a3 << " " << b3;
}