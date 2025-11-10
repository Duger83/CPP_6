using namespace std;

int main() {
  int n, i;
    
  cin >> n;
  i=1;
  while (i<=n) 
    {
       cout << i << "^2" << " = " << i*i;
       if (i<n) cout << endl;
       i++;
    }  
}