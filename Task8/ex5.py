using namespace std;

int main() {
  long long n, min, p, i;
    
  cin >> n;
  min=9;
  p=1;
  i=0;
  do 
    {
       i++;    
       if (n%10<min) {min=n%10; p=i;}
       n=n/10;
    }  
  while (n>0);  
  cout << i-p+1;
}