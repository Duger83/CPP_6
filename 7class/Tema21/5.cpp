#include <iostream>
using namespace std;

int main() {
    char s[1001];
    cin.getline(s, 1001);
    
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    
    int isPalindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if (isPalindrome) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}