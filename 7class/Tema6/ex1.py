using namespace std;

int main() {
    int a, d, e, f, des, b, c;
    
    cin >> a >> d >> e >> f;
    
   if (f - d >= 0) {b = f - d; des = 0;} else {b = f + 10 - d; des = 1;}
   if (des == 0) c = e - a; else c = e - a - 1;
   cout << b << " " << c;
}
