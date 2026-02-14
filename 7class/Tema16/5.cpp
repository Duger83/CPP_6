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
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            bool is_saddle = false;
            
            bool min_in_row = true;
            for (int k = 0; k < m; k++) {
                if (a[i][k] < a[i][j]) {
                    min_in_row = false;
                    break;
                }
            }
            
            bool max_in_col = true;
            for (int k = 0; k < n; k++) {
                if (a[k][j] > a[i][j]) {
                    max_in_col = false;
                    break;
                }
            }
            
            if (min_in_row && max_in_col) {
                is_saddle = true;
            }
            
            bool max_in_row = true;
            for (int k = 0; k < m; k++) {
                if (a[i][k] > a[i][j]) {
                    max_in_row = false;
                    break;
                }
            }
            
            bool min_in_col = true;
            for (int k = 0; k < n; k++) {
                if (a[k][j] < a[i][j]) {
                    min_in_col = false;
                    break;
                }
            }
            
            if (max_in_row && min_in_col) {
                is_saddle = true;
            }
            
            if (is_saddle) {
                cout << i << " " << j << endl;
            }
        }
    }
}