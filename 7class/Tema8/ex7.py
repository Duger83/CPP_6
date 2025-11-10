using namespace std;

int main() {
  long long n, n1, des, n2;
    
  cin >> n;
  n2=n;
  
  
  des=1;
  do 
    {
       des=des*10;
       n=n/10;
    }  
  while (n>0);
  des=des/10;
  
  n=n2;
  n1=0;
  do
    {
       n1=n1+n%10*des;
       des=des/10;
       n=n/10;
    }
  while (n>0);  
  
  if (n2-n1==0) cout << "Yes"; else cout << "No";
}