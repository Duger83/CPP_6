#include <iostream>
using namespace std;

int main() {
    char c;
    bool lastWasSpace = false;
    
    while (cin.get(c)) {
        if (c == ' ') {
            if (!lastWasSpace) {
                cout.put(c);
                lastWasSpace = true;
            }
        } else {
            cout.put(c);
            lastWasSpace = false;
        }
    }
}