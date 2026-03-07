#include <iostream>
#include <cmath>
using namespace std;

double area(int x1, int y1, int x2, int y2, int x3, int y3) {
    return abs((x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1)) / 2.0;
}

int main() {
    int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy;
    
    double distAB = 2.0 * area(Ax, Ay, Bx, By, Dx, Dy) / sqrt((Bx - Ax) * (Bx - Ax) + (By - Ay) * (By - Ay));
    double distBC = 2.0 * area(Bx, By, Cx, Cy, Dx, Dy) / sqrt((Cx - Bx) * (Cx - Bx) + (Cy - By) * (Cy - By));
    double distCA = 2.0 * area(Cx, Cy, Ax, Ay, Dx, Dy) / sqrt((Ax - Cx) * (Ax - Cx) + (Ay - Cy) * (Ay - Cy));
    
    double minDist = distAB;
    if (distBC < minDist) minDist = distBC;
    if (distCA < minDist) minDist = distCA;
    
    printf("%.4f", minDist);
    
}