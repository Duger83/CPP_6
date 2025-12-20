#include <iostream>
using namespace std;

int main() {
    int a0, lastC, sumXY, x0, X, A, x1, a1;
    cin >> a0 >> lastC >> sumXY;
    
    for (x1 = 9; x1 >= 1; x1--) 
    {
        x0 = sumXY - x1;
        if (x0 < 0 || x0 > 9) continue;
        X = 10 * x1 + x0;
        for (a1 = 1; a1 <= 9; a1++)
        {
            A = 10 * a1 + a0;
            if ((A * X) % 10 == lastC) {cout << X; return 0;}
        }
    }
}