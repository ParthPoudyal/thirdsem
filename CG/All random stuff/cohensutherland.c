#include <stdio.h> 
int* codearray (int xmax, int ymax, int xmin, int ymin, int x, int y){
    int code[]={0,0,0,0};
    if (y < ymin){
        code[0] = 1; 
    }
        if(y > ymax){
        code[1] = 1; 
    }
    if(x < xmin){
        code[2] = 1; 
    }
    if(x > xmin){
        code[3] = 1; 
    }
    for (int i = 0 ; i < 4 ; i++){
        printf ("%d", code[i]); 
    }
    return (code); 
}
int main()
{
    int xmin, ymin, xmax, ymax, x1,y1,x2,y2; 
    //completely outside 
    // completely inside
    //partial
    printf ("Enter the coordinates of xmin, ymin"); 
    scanf ("%d%d",&xmin,&ymin); 

    printf ("enter the coordinates for xmax, ymax"); 
    scanf ("%d%d",&xmax,&ymax); 

    printf ("enter the first set of vertices for line: (x1,y1)"); 
    scanf ("%d%d",&x1,&y1); 

    printf ("enter the second set of vertices for line: (x2,y2)"); 
    scanf ("%d%d",&x2,&y2); 

    int *vertex1_code = codearray(xmax,ymax,xmin,ymin,x1,y1); 
    int *vertex2_code = codearray(xmax,ymax,xmin,ymin,x2,y2); 

   /*  printf ("%d",vertex1_code); 
    printf ("%d",vertex2_code);  */

    for (int i = 0 ; i < 4; i ++){
            if (!(vertex1_code[i] && vertex2_code[i])){
                printf ("the line lies completely outside"); 
                return 0; 
            }
    }
}