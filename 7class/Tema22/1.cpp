#include <iostream>
using namespace std;

int main() {
    char s[1001];
    cin.getline(s, 1001);
    
    char a[101];
    cin >> a;
    
    char b[101];
    cin >> b;
    
    char words[100][101];
    int wordCount = 0;
    int i = 0;
    
    while (s[i] != '\0') {
        if (s[i] != ' ') {
            int j = 0;
            while (s[i] != ' ' && s[i] != '\0') {
                words[wordCount][j] = s[i];
                j++;
                i++;
            }
            words[wordCount][j] = '\0';
            wordCount++;
        } else {
            i++;
        }
    }
    
    for (int j = 0; j < wordCount; j++) {
        int match = 1;
        int k = 0;
        while (a[k] != '\0') {
            if (words[j][k] != a[k]) {
                match = 0;
                break;
            }
            k++;
        }
        if (match == 1 && words[j][k] == '\0') {
            for (int m = 0; m <= j; m++) {
                cout << words[m];
                if (m < j) {
                    cout << " ";
                }
            }
            cout << " " << b;
            for (int m = j + 1; m < wordCount; m++) {
                cout << " " << words[m];
            }
            return 0;
        }
    }
    
    for (int j = 0; j < wordCount; j++) {
        cout << words[j];
        if (j < wordCount - 1) {
            cout << " ";
        }
    }
    
    return 0;
}