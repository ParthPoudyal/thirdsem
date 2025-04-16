#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
void flood(int,int,int,int);
int main()
{
    int gdrive = DETECT, gmode;
    initgraph(&gdrive, &gmode, "C:\\Turboc3\\BGI"); 
    rectangle(50,50,100,100);
    flood(55,55,9,0);
    getch();
    return 0; 
}
void flood(int x,int y, int fill_col, int old_col)
{
if(getpixel(x,y)==old_col)
{
delay(10);
putpixel(x,y,fill_col);
flood(x+1,y,fill_col,old_col);
flood(x-1,y,fill_col,old_col);
flood(x,y+1,fill_col,old_col);
flood(x,y-1,fill_col,old_col);
}
}