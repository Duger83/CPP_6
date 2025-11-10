using namespace std;

int main() {
  long long n, max;
    
  cin >> n;
  max=0;
  do 
    {
       if (n%10>max) max=n%10;
       n=n/10;
    }  
  while (n>0);  
  cout << max;
}