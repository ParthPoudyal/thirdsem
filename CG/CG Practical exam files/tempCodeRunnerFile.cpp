#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#include<graphics.h>
using namespace std;
int x1,x2,y1,y2,mx,my,depth;
void draw();
void trans();
int main()
{
    int gdrive = DETECT, gmode;
    initgraph(&gdrive, &gmode, "C:\\TURBOC3\\BGI"); 
    std::cout << "\n\t\t3D Translation\n\n";
    std::cout << "\nEnter 1st top value(x1,y1): ";
    cin >> x1 >> y1;
    cout << "Enter right bottom value(x2,y2): ";
    cin >> x2 >> y2;
    depth=(x2-x1)/4;
    mx=(x1+x2)/2;
    my=(y1+y2)/2;
    draw();
    getch();
    cleardevice();
    trans();
    getch();
}
void draw()
{
    bar3d(x1,y1,x2,y2,depth,1);
}
void trans()
{
    int a1,a2,b1,b2,dep,x,y;
    std::cout << "\n Enter the Translation Distances: ";
    std::cin >> x >> y;
    a1=x1+x;
    a2=x2+x;
    b1=y1+y;
    b2=y2+y;
    dep=(a2-a1)/4;
    bar3d(a1,b1,a2,b2,dep,1);
    setcolor(5);
    draw();
}
