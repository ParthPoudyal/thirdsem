#include <iostream> 
#include <graphics.h>

using namespace std; 
int main(){
    int gdrive = DETECT, gmode;
    initgraph(&gdrive, &gmode, " "); 
    int x0, y0 , x1,  y1 , sx, sy; 
    cout << "enter the vertices of a vector to be scaled"<<endl; 
    cout << "for first endpoint : "; 
    cin >> x0 >> y0; 
    cout << "for the second endpoint : "; 
    cin >> x1 >> y1; 
    cout << "scaling by ? (sx, sy)"<<endl; 
    cin >> sx >> sy; 


    line(x0, y0 , x1, y1); 
    delay(2000); // delay for 2 sec
    setcolor(GREEN); // to change the color of the line to green 
    cout << "after translation";
    line(x0 * sx, y0 * sy , x1 * sx, y1 * sy); 

    getch(); 
    closegraph(); 
    
}