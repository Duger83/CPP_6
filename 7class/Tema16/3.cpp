#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int a[100][100];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    int max_sum = -1000000;
    int max_row = 0;
    
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += a[i][j];
        }
        if (sum > max_sum) {
            max_sum = sum;
            max_row = i;
        }
    }
    
    cout << max_row + 1;
}