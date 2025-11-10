using namespace std;

int main() {
  int n, i;
    
  cin >> n;
  i=1;
  while (i < n) 
    {
       cout << i << " + " << n-i << " = " << n;
       if (i<n) cout << endl;
       i++;
    }  
}