#include <stdio.h>
#include <stdlib.h> 
void main(){
    int x, *ptr;
    int y, *pt;
    pt = (int *)calloc(10,sizeof(int));   
    ptr = (int*)malloc(10*sizeof(int)); 
    printf ("%d",sizeof(pt)); printf ("\n"); 
    printf ("%d",pt[0]); printf ("\n");  // allocates a 0 value
       
    printf ("%d",sizeof(ptr)); printf ("\n"); // size of poitner is the size of the type of data type
    printf ("%d",ptr[0]);printf ("\n");  // allocates a garbage value
}