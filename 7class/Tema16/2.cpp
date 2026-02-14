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
    
    int max_row = 0, max_col = 0;
    int max_val = a[0][0];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] > max_val) {
                max_val = a[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        int temp = a[i][0];
        a[i][0] = a[i][max_col];
        a[i][max_col] = temp;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j];
            if (j < m - 1) cout << " ";
        }
        cout << endl;
    }
}