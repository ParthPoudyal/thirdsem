// done by Parth Poudyal
#include <iostream> 
#include <graphics.h>
#include <stdlib.h>
#include <math.h>
using namespace std; 
int main(){
    int x1,y1,x2,y2,p, steps;
    float m ; 
    int gdrive = DETECT, gmode;
    initgraph(&gdrive, &gmode, NULL); 
    cout << "enter the starting coordinates: (x1, y1)" << endl; 
    cin >> x1 >> y1; 
    cout << "enter the ending coordinates : (x2, y2)"<< endl;
    cin >> x2 >> y2; 
    int del_x = abs(x2-x1); 
    int del_y = abs(y2-y1);
    int inc_x , inc_y; 
    (x2-x1)< 0 ? inc_x = -1 : inc_x = 1; 
    (y2-y1)< 0 ? inc_y = -1 : inc_y = 1; 

    //performing try catch
    try{ 
        if (del_x == 0)
        {
            throw ("zero div err :values of x1 and x2 cannot be equal"); 
        }
        m = del_y/del_x;
    }
    catch(const string &e){
        cout << "error : " << e; 

    // decision making process
    }
    if (m >= 1){
        steps = del_y; 
        p = 2*del_x - del_y; 
        for (int i = 0 ; i < steps ; i++){
            putpixel((x1),(y1), WHITE); 
            x1+=inc_x; 
            if (p < 0){
                p = p + 2*del_x; 
                }
            else{
                y1 += inc_y; 
                p = p + 2*del_x - 2*del_y; 
            }
        }
    }
    else{
        steps = del_x; 
        p = 2*del_y - del_x;
        for (int i = 0 ; i < steps ; i++){
            putpixel((x1),(y1), WHITE); 
            y1+= inc_y; 
            if (p < 0){
                p = p + 2*del_y; 
                }
            else{
                x1+= inc_x; 
                p = p + 2*del_y - 2*del_x; 
            }
        } 
    }
    getch(); 
    closegraph();
    return 0 ;    
}
