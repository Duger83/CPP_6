#include <iostream>
using namespace std;

int main() {
    char s[1001];
    cin.getline(s, 1001);
    
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
    
    int maxLen = 0;
    int maxIndex = 0;
    for (int j = 0; j < wordCount; j++) {
        int len = 0;
        while (words[j][len] != '\0') {
            len++;
        }
        if (len > maxLen) {
            maxLen = len;
            maxIndex = j;
        }
    }
    
    if (maxIndex != 0) {
        char temp[101];
        int k = 0;
        while (words[0][k] != '\0') {
            temp[k] = words[0][k];
            k++;
        }
        temp[k] = '\0';
        
        k = 0;
        while (words[maxIndex][k] != '\0') {
            words[0][k] = words[maxIndex][k];
            k++;
        }
        words[0][k] = '\0';
        
        k = 0;
        while (temp[k] != '\0') {
            words[maxIndex][k] = temp[k];
            k++;
        }
        words[maxIndex][k] = '\0';
    }
    
    for (int j = 0; j < wordCount; j++) {
        int k = 0;
        while (words[j][k] != '\0') {
            cout << words[j][k];
            k++;
        }
        if (j < wordCount - 1) {
            cout << ' ';
        }
    }
}