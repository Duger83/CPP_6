using namespace std;

int main() {

  int a, b, i;
  cin >> a >> b;
  
  if (a<b)
    {
     for (i=a; i<=b; i++)
      {
        cout << i;
        if (i<b) cout << " ";
      }
    } 
  else
   {
     for (i=a; i>=b; i--)
      {
        cout << i;
        if (i>b) cout << " ";
      }  
   }
}