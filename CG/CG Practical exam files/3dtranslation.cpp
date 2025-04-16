#include <iostream>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <process.h>

using namespace std;

int x1, x2, y_top, y_bottom, mx, my, depth;

void draw();
void trans();

int main() {
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI"); // Adjust for your BGI path

    cout << "\n\t\t3D Translation\n\n";

    cout << "Enter top-left value (x1, y1): ";
    cin >> x1 >> y_top;

    cout << "Enter bottom-right value (x2, y2): ";
    cin >> x2 >> y_bottom;

    depth = (x2 - x1) / 4;
    mx = (x1 + x2) / 2;
    my = (y_top + y_bottom) / 2;

    draw();      // Draw original 3D bar
    getch();

    cleardevice(); // Clear screen before translation
    trans();       // Draw translated bar
    getch();

    closegraph();  // Always close graphics
    return 0;
}

void draw() {
    setcolor(WHITE);
    bar3d(x1, y_top, x2, y_bottom, depth, 1); // Draw original bar
}

void trans() {
    int a1, a2, b1, b2, dep, tx, ty;

    cout << "\nEnter the Translation Distances (tx, ty): ";
    cin >> tx >> ty;

    a1 = x1 + tx;
    a2 = x2 + tx;
    b1 = y_top + ty;
    b2 = y_bottom + ty;
    dep = (a2 - a1) / 4;

    setcolor(YELLOW);
    bar3d(a1, b1, a2, b2, dep, 1); // Translated bar

    setcolor(LIGHTBLUE);
    draw(); // Optional: draw original again for comparison
}
