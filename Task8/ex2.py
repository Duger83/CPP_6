using namespace std;

int main() {
  long long n, k;
    
  cin >> n;
  k=0;
  do 
    {
       k++;
       n=n/10;
    }  
  while (n>0);  
  cout << k;
}