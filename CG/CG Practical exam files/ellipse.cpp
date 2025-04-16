#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<iostream>
using namespace std;

void disp();
float x, y;
int xc, yc;


int main()
{
    int gd=DETECT,gm;
    initgraph(&gd, &gm, (char*)"");
    int rx, ry; 
    float p1, p2;  
    int gdrive = DETECT, gmode;
    initgraph(&gdrive, &gmode, ""); 

    printf("Enter the center point :");
    scanf("%d%d",&xc,&yc);
    printf("Enter the value for Rx and Ry :");
    scanf("%d%d",&rx,&ry);
    int x=0;
    int y=ry;
    disp();
    
    // For region 1
    p1=(ry*ry)-(rx*rx*ry)+(rx*rx)/4;
    while((2.0*ry*ry*x)<=(2.0*rx*rx*y)){
        x++;
        if(p1<=0)
            p1=p1+(2.0*ry*ry*x)+(ry*ry);
        else
        {
            y--;
            p1=p1+(2.0*ry*ry*x)-(2.0*rx*rx*y)+(ry*ry);
        }
        disp();
        x=-x;
        disp();
        x=-x;   
    }
    x=rx;
    y=0;
    disp();
    // For region 2
    p2=(rx*rx)+2.0*(ry*ry*rx)+(ry*ry)/4;
    while((2.0*ry*ry*x)>(2.0*rx*rx*y))
    {
        y++;
        if(p2>0)
            p2=p2+(rx*rx)-(2.0*rx*rx*y);
        else{
            x--;
            p2=p2+(2.0*ry*ry*x)-(2.0*rx*rx*y)+(rx*rx);
        }
        disp();
    y=-y;
    disp();
    cin.get();
    }
    getch();
    closegraph();
}
void disp()
{
delay(50); // this is there just to show some animated pixel putting, can remove
putpixel(xc+x,yc+y,10);
putpixel(xc-x,yc+y,10);
putpixel(xc+x,yc-y,10);
putpixel(xc-x,yc-y,10);
}