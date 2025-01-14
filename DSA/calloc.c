#include <stdio.h> 
#include <stdlib.h>
int main(){
    int n , i, *ptr, sum= 0 ; 
    printf ("Enter the size of the array"); 
    scanf ("%d", &n); 

    ptr = (int*)calloc (n,sizeof(int));
    //to check for memory allocation 

    if (ptr == NULL){
        printf ("error allocating memory"); 
    } 
    for (int i = 0 ; i < n ; i++)
    {
        printf ("enter %d element",i+1); 
        scanf ("%d", (ptr+i)); 
        sum += *(ptr+i) ;
    }
    printf ("the sum is : %d", sum);
    free(ptr); 
    return 0 ; 
}