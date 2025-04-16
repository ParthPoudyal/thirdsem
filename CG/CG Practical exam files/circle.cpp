#include <iostream> 
#include <graphics.h>
using namespace std; 
void makecircle (int x, int y){
    int xc = 50;
    int yc = 50;
    //utilizing 8 way symmetry
    putpixel(xc+x,yc-y,WHITE); //For pixel (x,y)
    putpixel(xc+y,yc-x, BLUE); //For pixel (y,x)
    putpixel(xc+y,yc+x, RED); //For pixel (y,-x)
    putpixel(xc+x,yc+y, GREEN); //For pixel (x,-y)
    putpixel(xc-x,yc+y, YELLOW); //For pixel (-x,-y)
    putpixel(xc-y,yc+x, CYAN); //For pixel (-y,-x)
    putpixel(xc-y,yc-x, COLOR(116, 103, 204)); //For pixel (-y,x)
    putpixel(xc-x,yc-y, COLOR(230, 74, 25)); //For pixel (-x,y)
}; 
int main()
{
    int gdrive = DETECT, gmode;
    initgraph(&gdrive, &gmode, ""); 
    int r; 
    cout << "enter the radius of the circle"<<endl; 
    cin >> r; 
    int x0 , y0 , p0; 
    y0 = r; 
    x0 = 0; 
    p0 = 1 - r; // 5/4 - r

    int x = x0 , y = y0, p =p0;  
    while (x <= y){
        x++; 
        if (p < 0){
            p = p + 2 * x + 1; 
        }
        else{
            y = y - 1; 
            p = p + 2 * x - 2 * y + 1; 
        }
        makecircle(x, y); 
    }
    getch(); 
    closegraph(); 
}