#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << (n/60)%24 << " " << n%60;
}