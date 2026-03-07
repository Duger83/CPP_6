#include <iostream>
#include <cmath> //без этого невозможно вычислить квадратный корень sqrt и модуль abs
using namespace std;

double getArea(int x1, int y1, int x2, int y2, int x3, int y3) {
    return abs((x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1)) / 2.0;
}

int main() {
    int Ax, Ay, Bx, By, Cx, Cy;
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;
    
    int Dx, Dy, Ex, Ey, Fx, Fy;
    cin >> Dx >> Dy >> Ex >> Ey >> Fx >> Fy;
    
    double area1 = getArea(Ax, Ay, Bx, By, Cx, Cy);
    double area2 = getArea(Dx, Dy, Ex, Ey, Fx, Fy);
    
    printf("%.4f\n%.4f", area1, area2);

}