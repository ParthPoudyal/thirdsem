#include <graphics.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>

using namespace std;

const int WIDTH = 640;
const int HEIGHT = 480;
const int MAX_DEPTH = 1000;

float zBuffer[WIDTH][HEIGHT]; // Z-buffer array

void initializeZBuffer() {
    for(int i = 0; i < WIDTH; i++) {
        for(int j = 0; j < HEIGHT; j++) {
            zBuffer[i][j] = MAX_DEPTH; // Initialize all pixels to maximum depth
        }
    }
}

void drawTriangle(int x1, int y1, float z1, int x2, int y2, float z2, int x3, int y3, float z3, int color) {
    int ymin = min({y1, y2, y3});
    int ymax = max({y1, y2, y3});

    for(int y = ymin; y <= ymax; y++) {
        vector<pair<int, float>> intersections;

        auto edgeIntersect = [&](int x0, int y0, float z0, int x1, int y1, float z1) {
            if (y0 == y1) return; // Horizontal line, skip

            if (y0 > y1) {
                swap(x0, x1);
                swap(y0, y1);
                swap(z0, z1);
            }

            if (y >= y0 && y <= y1) {
                float t = float(y - y0) / (y1 - y0);
                int x = x0 + t * (x1 - x0);
                float z = z0 + t * (z1 - z0);
                intersections.push_back({x, z});
            }
        };

        edgeIntersect(x1, y1, z1, x2, y2, z2);
        edgeIntersect(x2, y2, z2, x3, y3, z3);
        edgeIntersect(x3, y3, z3, x1, y1, z1);

        if (intersections.size() >= 2) {
            sort(intersections.begin(), intersections.end());

            int xStart = intersections[0].first;
            int xEnd = intersections[1].first;
            float zStart = intersections[0].second;
            float zEnd = intersections[1].second;

            for (int x = xStart; x <= xEnd; x++) {
                if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT) continue;

                float t = (float)(x - xStart) / (xEnd - xStart);
                float z = zStart + t * (zEnd - zStart);

                if (z < zBuffer[x][y]) {
                    zBuffer[x][y] = z;
                    putpixel(x, y, color);
                }
            }
        }
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    initializeZBuffer();

    drawTriangle(100, 100, 10, 300, 150, 50, 200, 300, 30, WHITE);
    drawTriangle(200, 150, 20, 400, 200, 70, 300, 350, 60, RED);
    drawTriangle(150, 250, 5, 350, 300, 40, 250, 400, 20, GREEN);

    getch();
    closegraph();

    return 0;
}
