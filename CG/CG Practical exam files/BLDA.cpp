#include <iostream>
#include <graphics.h>
using namespace std; 
int main(){
    int gdrive = DETECT, gmode;
    initgraph(&gdrive, &gmode, ""); 
    // this program is for slope when the slope is less than 1
    cout << "enter beginning point x0, y0" <<endl; 
    int x0 , x1, y0, y1; 
    cin >> x0 >> y0; 
    cout << "enter the end points x1, y1"<<endl; 
    cin >> x1 >> y1; 
    //for initial decision paramter 
    int p0, dely, delx; 
    dely = y1 - y0; 
    delx = x1 - x0; 
    p0 = 2*dely - delx; 

    int x = x0; 
    int y = y0; 
    int p = p0; 
    while (x <= x1){
        x = x + 1; 
        //to move forward using the decision paramter
        if (p < 0){
            y = y ; 
            p = p + 2*dely; 
        }
        else {
            y = y + 1 ; 
            p = p + 2*dely - 2*delx;
        }
        putpixel(x, y, WHITE); //putting pixel using graphics.h 
    }
    getch(); 
    closegraph(); 
}