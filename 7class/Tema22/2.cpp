#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    char words[100][101];
    
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (words[i][0] >= 'a' && words[i][0] <= 'z') {
            words[i][0] = words[i][0] - 32;
        }
        for (int j = 1; words[i][j] != '\0'; j++) {
            if (words[i][j] >= 'A' && words[i][j] <= 'Z') {
                words[i][j] = words[i][j] + 32;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << words[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
}