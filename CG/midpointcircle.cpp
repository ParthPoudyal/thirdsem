#include <iostream>
#include <graphics.h>
#include <stdlib.h>
using namespace std;

void drawCirclePoints(int h, int k, int x, int y)
{
    putpixel(h + x, k + y, WHITE);
    putpixel(h - x, k + y, WHITE);
    putpixel(h + x, k - y, WHITE);
    putpixel(h - x, k - y, WHITE);
    putpixel(h + y, k + x, WHITE);
    putpixel(h - y, k + x, WHITE);
    putpixel(h + y, k - x, WHITE);
    putpixel(h - y, k - x, WHITE);
}

int main()
{
    int r, x_0, y_0, p_0, h, k;

    int gdrive = DETECT, gmode;
    initgraph(&gdrive, &gmode, "");

    cout << "enter the center of the circle" << endl;
    cin >> h >> k;
    putpixel(h, k, RED);

    cout << "enter the radius of the cirle" << endl;
    cin >> r;
    cout << "priting the circle using mid-point circle algoritm" << endl;
    x_0 = 0;
    y_0 = r;
    p_0 = 1 - r;

    while (x_0 < y_0)
    {
        drawCirclePoints(h, k, x_0, y_0);
        if (p_0 < 0)
        {
            x_0 += 1;
            p_0 += 2 * x_0 + 1;
        }
        else
        {
            x_0 += 1;
            y_0 -= 1;
            p_0 += 2 * x_0 - 2 * y_0 + 1;
        }
    }

    getch();
    closegraph();
    return 0;
}