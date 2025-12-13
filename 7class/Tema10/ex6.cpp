using namespace std;

int main() {

  long long n, x, p, k;
  cin >> n >> x;
  
  p=x;
  k=1;
  while (p<=n) 
   {
       p=p*x;
       k++;
   }
  cout << p << endl << k;
}