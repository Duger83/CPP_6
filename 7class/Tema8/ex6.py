using namespace std;

int main() {
  long long n;
    
  cin >> n;
  do 
    {
       cout << n%10;
       n=n/10;
    }  
  while (n>0);  
}