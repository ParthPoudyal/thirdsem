#include <iostream> 
#include <graphics.h>
#include <math.h>

using namespace std; 
int main(){
        int gdrive = DETECT, gmode;
        initgraph(&gdrive, &gmode, " "); 
    int x0, y0 , x1,  y1 ;
    float deg, rad; 
    cout << "enter the vertices of a vector to be rotated"<<endl; 
    cout << "for first endpoint : "; 
    cin >> x0 >> y0; 
    cout << "for the second endpoint : "; 
    cin >> x1 >> y1; 
    cout << "angle of rotation"; 
    cin >> deg;
    rad = deg *(3.14/180); 

    float x2=(x0*cos(rad))-(y0*sin(rad));
    float y2=(x0*sin(rad))+(y0*cos(rad));
    float x3=(x1*cos(rad))-(y1*sin(rad));
    float y3=(x1*sin(rad))+(y1*cos(rad));

    line(x0, y0 , x1, y1); 
    delay(2000); // delay for 2 sec
    setcolor(GREEN); // to change the color of the line to green 
    cout << "after rotation";
    line(round(x2), round(y2) ,round(x3), round(y3)); 

    getch(); 
    closegraph(); 
    
}