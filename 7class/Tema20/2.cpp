#include <cstdio>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    
    int digits[10];
    int count = 0;
    
    if (n == 0) {
        putchar('0');
    } else {
        while (n > 0) {
            digits[count++] = n % 10;
            n /= 10;
        }
        
        for (int i = count - 1; i >= 0; i--) {
            putchar(digits[i] + '0');
            if (i > 0) {
                putchar('$');
            }
        }
    }
}