#include <iostream>
using namespace std;

int getSumOfDivisors(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    return sum;
}

int main() {
    int m, n;
    cin >> m >> n;
    
    for (int a = m; a <= n; a++) {
        int b = getSumOfDivisors(a);
        if (b > a && b <= n) {
            if (getSumOfDivisors(b) == a) {
                cout << a << " " << b << endl;
            }
        }
    }
    
}