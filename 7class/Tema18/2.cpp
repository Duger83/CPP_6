#include <iostream>
#include <cmath>
using namespace std;

double area(int x1, int y1, int x2, int y2, int x3, int y3) {
    return abs((x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1)) / 2.0;
}

int main() {
    int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy;
    
    double areaABC = area(Ax, Ay, Bx, By, Cx, Cy);
    double areaABD = area(Ax, Ay, Bx, By, Dx, Dy);
    double areaBCD = area(Bx, By, Cx, Cy, Dx, Dy);
    double areaCAD = area(Cx, Cy, Ax, Ay, Dx, Dy);
    
    if (abs(areaABC - (areaABD + areaBCD + areaCAD)) < 1e-9) {
        cout << 1;
    } else {
        cout << 0;
    }
}