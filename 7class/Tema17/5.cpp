#include <iostream>
using namespace std;

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    
    for (int p = 2; p <= n / 2; p++) {
        int q = n - p;
        if (isPrime(p) && isPrime(q)) {
            cout << p << " " << q << endl;
        }
    }
    
}