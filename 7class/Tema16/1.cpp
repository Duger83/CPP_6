#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[100][100];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    int above = 0, on = 0, below = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > i) above += a[i][j];
            else if (j == i) on += a[i][j];
            else below += a[i][j];
        }
    }
    
    cout << above << endl;
    cout << on << endl;
    cout << below;
}