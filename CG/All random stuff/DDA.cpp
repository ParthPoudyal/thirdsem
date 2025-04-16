// DONE BY PARTH POUDYAL (1317)
#include <iostream>
#include <math.h>
#include <graphics.h>
#include <stdlib.h>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    float steps_x, steps_y, steps;
    float x_inc, y_inc;

    int gdrive = DETECT, gmode;
    initgraph(&gdrive, &gmode, ""); 


    cout << "Enter the values for x1 and y1 respectively: ";
    cin >> x1 >> y1;
    cout << "Enter the values for x2 and y2 respectively: ";
    cin >> x2 >> y2;

    cout << "The initial points are: " << x1 << "," << y1 << endl;
    cout << "The ending points are: " << x2 << "," << y2 << endl;
    cout << "Forming a new line using a line-drawing algorithm." << endl;

    // to calculate the steps
    steps_x = abs(x2 - x1);
    steps_y = abs(y2 - y1);
    steps = (steps_x >= steps_y) ? steps_x : steps_y;

    x_inc = (float)(x2 - x1) / steps;
    y_inc = (float)(y2 - y1) / steps;

    float x = x1, y = y1;
    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), WHITE); 
        x += x_inc;
        y += y_inc;
    }
    getch(); 
    closegraph(); 
    return 0;
}

