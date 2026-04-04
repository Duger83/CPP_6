#include <iostream>
using namespace std;

int main() {
    char s[1001];
    cin.getline(s, 1001);
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ') {
            cout << s[i];
        } else {
            cout << endl;
        }
    }
}