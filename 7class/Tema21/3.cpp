#include <iostream>
using namespace std;

int main() {
    char s[1001];
    cin.getline(s, 1001);
    
    int maxLen = 0;
    int maxStart = 0;
    int curLen = 0;
    int curStart = 0;
    
    for (int i = 0; ; i++) {
        if (s[i] != ' ' && s[i] != '\0') {
            if (curLen == 0) {
                curStart = i;
            }
            curLen++;
        } else {
            if (curLen > maxLen) {
                maxLen = curLen;
                maxStart = curStart;
            }
            curLen = 0;
        }
        if (s[i] == '\0') {
            break;
        }
    }
    
    for (int i = maxStart; i < maxStart + maxLen; i++) {
        cout << s[i];
    }
}