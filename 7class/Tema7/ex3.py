using namespace std;

int main() {
  int k, a;
    
  k=0;
  cin >> a;    
  while (a != 0) 
    {
        if (a>0 && a%2==0) k++;
        cin >> a;
    }  
  cout << k;    
}