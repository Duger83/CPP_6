#include <cstdio>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        char h;
        int a, b;
        scanf(" %c %d %d", &h, &a, &b);
        
        for (int j = 0; j < a; j++) {
            putchar(' ');
        }
        for (int j = 0; j < b; j++) {
            putchar(h);
        }
        putchar('\n');
    }
}