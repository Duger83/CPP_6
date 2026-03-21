#include <cstdio>
using namespace std;

int main() {
    char c;
    
    while ((c = getchar()) != EOF && c != '\n') {
        if (c >= '0' && c <= '9') {
            putchar(c);
        }
    }
}