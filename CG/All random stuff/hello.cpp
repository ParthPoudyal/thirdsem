#include <graphics.h>

int main(){
    int gdrive = DETECT;
    int gmode;

    initgraph(&gdrive, &gmode, NULL);
    // you can also pass NULL for third parameter if you did above setup successfully
    // example: initgraph(&gd, &gm, NULL);

    arc(200, 200, 0, 360, 100);
    arc(150, 150, 0, 360, 20);
    arc(250, 150, 0, 360, 20);

    arc(200, 200, 0, 360, 5);
    arc(200, 250, 180, 360, 30);

    getch();
    closegraph();
}