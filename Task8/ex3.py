using namespace std;

int main() {
  long long n, s;
    
  cin >> n;
  s=0;
  do 
    {
       s=s+n%10;
       n=n/10;
    }  
  while (n>0);  
  cout << s;
}