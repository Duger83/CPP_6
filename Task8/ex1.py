using namespace std;

int main() {
  long long n;
    
  cin >> n;
 
  do 
    {
       if (n>10) cout << n%10 << " ";
       else cout << n%10;
       n=n/10;
    }  
  while (n>0);    
}