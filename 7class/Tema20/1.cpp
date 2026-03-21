#include <cstdio>
using namespace std;

int main() {
    char c;
    int num = 0;
    
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            num = num * 10 + (c - '0');
        }
    }
    
    printf("%d", num);
    
}