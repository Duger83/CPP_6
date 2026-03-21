#include <cstdio>
using namespace std;

int main() {
    char s[1001];
    scanf("%s", s);
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '>') {
            s[i] = '<';
        } else if (s[i] == '<') {
            s[i] = '>';
        }
    }
    
    int count = 0;
    for (int i = 0; s[i] != '\0' && s[i + 1] != '\0'; i++) {
        if (s[i] == '>' && s[i + 1] == '<') {
            count++;
        }
    }
    
    printf("%d", count);
}