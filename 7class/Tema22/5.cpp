#include <iostream>
using namespace std;

int main() {
    int A, L;
    cin >> A >> L;
    
    char binary[1001];
    cin >> binary;
    
    int step;
    if (A == 4) {
        step = 2;
    } else {
        step = 3;
    }
    
    int result[500];
    int resultIndex = 0;
    
    for (int i = 0; i < L; i += step) {
        int val = 0;
        for (int j = 0; j < step; j++) {
            val = val * 2 + (binary[i + j] - '0');
        }
        result[resultIndex] = val;
        resultIndex++;
    }
    
    for (int i = 0; i < resultIndex; i++) {
        cout << result[i];
    }
}