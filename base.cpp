#include <iostream>
using namespace std;
int main()
{
    int a , b , c , g;
    cin >> a >> b >> c;
    a = (a - 1) / 2 + 1;
    b = (b - 1) / 2 + 1;
    c = (c - 1) / 2 + 1;
    g = a + b + c;
    cout << g;
}