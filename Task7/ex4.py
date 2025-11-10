using namespace std;

int main() {
  int n, i;
    
  cin >> n;
  i=0;
  while (i < n) 
    {
        i++;
        if (i<n) cout << i << " "; 
        else cout << i << endl; 
    }  
  while (i > 0) 
    {
        if (i>1) cout << i << " ";
        else cout << i;
        i--;
    }  
}