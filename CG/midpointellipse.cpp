#include <iostream>
#include <graphics.h>

using namespace std;

void drawEllipsePoints(int xc, int yc, int x, int y)
{
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
}

void drawEllipse(int xc, int yc, int rx, int ry)
{
    float rx2 = rx * rx;
    float ry2 = ry * ry;

    float x = 0, y = ry;
    float p1 = ry2 - (rx2 * ry) + (0.25 * rx2);

    // This is for region 1: Slope > -1
    while (2 * ry2 * x <= 2 * rx2 * y)
    {
        drawEllipsePoints(xc, yc, x, y);
        if (p1 < 0)
        {
            x++;
            p1 += 2 * ry2 * x + ry2;
        }
        else
        {
            x++;
            y--;
            p1 += 2 * ry2 * x - 2 * rx2 * y + ry2;
        }
    }

    // This is for region 2 : slope <= - 1
    float p2 = (ry2) * (x + 0.5) * (x + 0.5) + (rx2) * (y - 1) * (y - 1) - (rx2 * ry2);
    while (y >= 0)
    {
        drawEllipsePoints(xc, yc, x, y);
        if (p2 > 0)
        {
            y--;
            p2 -= 2 * rx2 * y + rx2;
        }
        else
        {
            y--;
            x++;
            p2 += 2 * ry2 * x - 2 * rx2 * y + rx2;
        }
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int xc, yc, rx, ry;

    cout << "Enter the center of the ellipse (xc, yc): ";
    cin >> xc >> yc;
    cout << "Enter the x-radius (rx) and y-radius (ry) of the ellipse: ";
    cin >> rx >> ry;

    drawEllipse(xc, yc, rx, ry);

    getch();
    closegraph();
    return 0;
}
