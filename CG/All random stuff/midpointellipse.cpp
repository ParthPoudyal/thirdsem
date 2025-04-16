    #include <graphics.h>
    #include <iostream>
    using namespace std;

    //By Parth Poudyal
    void plotPoints(int xc, int yc, int x, int y) {
        putpixel(xc + x, yc + y, WHITE); 
        putpixel(xc - x, yc + y, WHITE);  
        putpixel(xc + x, yc - y, WHITE);  
        putpixel(xc - x, yc - y, WHITE);  
    }

    void drawEllipse(int xc, int yc, int rx, int ry) {
        int x = 0, y = ry;
        int rx2 = rx * rx;
        int ry2 = ry * ry;
        int tworx2 = 2 * rx2;
        int twory2 = 2 * ry2;

        // Initial decision parameter of region 1
        int p1 = ry2 - (rx2 * ry) + (0.25 * rx2);
        int dx = 0;
        int dy = tworx2 * y;

        // Region 1
        while (dx < dy) {
            plotPoints(xc, yc, x, y);
            x++;
            dx += twory2;

            if (p1 < 0) {
                p1 += ry2 + dx;
            } else {
                y--;
                dy -= tworx2;
                p1 += ry2 + dx - dy;
            }
        }

    
        int p2 = (ry2 * (x + 0.5) * (x + 0.5)) + (rx2 * (y - 1) * (y - 1)) - (rx2 * ry2);

        // Region 2
        while (y >= 0) {
            plotPoints(xc, yc, x, y);
            y--;
            dy -= tworx2;

            if (p2 > 0) {
                p2 += rx2 - dy;
            } else {
                x++;
                dx += twory2;
                p2 += rx2 - dy + dx;
            }
        }
    }

    int main() {
        int gd = DETECT, gm;
        initgraph(&gd, &gm, (char*)"");

        int xc, yc, rx, ry;
        cout << "Enter the center of the ellipse (xc, yc): ";
        cin >> xc >> yc;

        cout << "Enter the x-radius (rx): ";
        cin >> rx;

        cout << "Enter the y-radius (ry): ";
        cin >> ry;

        drawEllipse(xc, yc, rx, ry);

        getch();
        closegraph();
        return 0;
    }
