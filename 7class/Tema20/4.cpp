#include <cstdio>
using namespace std;

int main() {
    char c;
    
    while ((c = getchar()) != EOF && c != '\n') {
        if (c >= 'a' && c <= 'z') {
            putchar(c - 32);
        } else {
            putchar(c);
        }
    }
}