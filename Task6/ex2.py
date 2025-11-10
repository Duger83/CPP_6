
using namespace std;

int main() {
    int a, d, e, f, des, b, c;
    
    cin >> a >> d >> e >> f;
    
   if (f + d < 10) {b = f + d; des = 0;} else {b = f + d - 10; des = 1;}
   if (des == 0) c = a - e; else c = a - e - 1;
   cout << b << " " << c;
}