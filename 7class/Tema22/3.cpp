#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    char words[100][101];
    char result[100][101];
    int resultCount = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> words[i];
        
        int len = 0;
        while (words[i][len] != '\0') {
            len++;
        }
        
        if (len == k) {
            int j = 0;
            while (words[i][j] != '\0') {
                result[resultCount][j] = words[i][j];
                j++;
            }
            result[resultCount][j] = '\0';
            resultCount++;
        }
    }
    
    cout << resultCount << endl;
    
    for (int i = 0; i < resultCount; i++) {
        cout << result[i];
        if (i < resultCount - 1) {
            cout << " ";
        }
    }
    cout << endl;
    
    for (int i = 0; i < n; i++) {
        cout << words[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
}