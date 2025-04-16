#include <graphics.h>
#include <conio.h> #include <iostream>
using namespace std;
void reflectRectangle(int &x1, int &y1, int &x2, int &y2, bool reflectX, bool reflectY)
{
    if (reflectX)
    {
        y1 = getmaxy() - y1;
        y2 = getmaxy() - y2;
    }
    if (reflectY)
    {
        x1 = getmaxx() - x1;
        x2 = getmaxx() - x2;
    }
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x1 = 150, y1 = 100, x2 = 300, y2 = 200;
    setcolor(WHITE);
    rectangle(x1, y1, x2, y2);
    reflectRectangle(x1, y1, x2, y2, true, false);
    setcolor(RED);
    rectangle(x1, y1, x2, y2);
    getch();
    closegraph();
    return 0;
}
