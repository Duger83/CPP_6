using namespace std;

int main() {

  int n, ch1, ch2, ch3, ch4, i, x, y;
  cin >> n;
  ch1=0;
  ch2=0;
  ch3=0;
  ch4=0;
  
  for (i=1; i<=n; i++)
   {
      cin >> x >> y;
      if (x>0 && y>0) ch1++;
      if (x<0 && y>0) ch2++;
      if (x<0 && y<0) ch3++;
      if (x>0 && y<0) ch4++;
   }
  if (ch2*10+ch1<24 && ch3*10+ch4<60) cout << ch2 << ch1 << " " << ch3 << ch4;
  else cout << "Broken";
}