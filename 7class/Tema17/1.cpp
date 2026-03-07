#include <iostream>
using namespace std;

int isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int n;
    cin >> n;
    
    if (isEven(n)) {
        cout << "Even";
    } else {
        cout << "Odd";
    }
    
}