#include<iostream>
using namespace std;
int main() 
{ 
    int ax, ay, bx, by, cx, cy, dx, dy;
    int k, p;
    
    cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;
    
    k=-1; // 1 - медиана, 2 - высота, 3 - биссектриса3
    p=0;
    
    //для меданы
    int x1, y1;
    
    x1 = (cx+ax);
    y1 = (cy+ay);
    if (x1==2*dx && y1==2*dy) {k=1; p++;};
    
    //для высоты
    int v1x, v1y, v2x, v2y;
    
    v1x = ax-cx;
    v1y = ay-cy;
    
    v2x = bx-dx;
    v2y = by-dy;
    if (v1x*v2x + v1y*v2y == 0) {k=2; p++;};
    
    //для биссектрисы
    long long ab, bc, ad, dc;
    
    ab = (bx-ax)*(bx-ax)+(by-ay)*(by-ay);
    bc = (cx-bx)*(cx-bx)+(cy-by)*(cy-by);
    ad = (dx-ax)*(dx-ax)+(dy-ay)*(dy-ay);
    dc = (cx-dx)*(cx-dx)+(cy-dy)*(cy-dy);
    if (ab*dc==bc*ad) {k=3; p++;};
    
    if (p==3) cout << "all";
    else if (k==1) cout << "median";
         else if (k==2) cout << "altitude";
              else if (k==3) cout << "bisector";
                   else cout << "cevian";
}