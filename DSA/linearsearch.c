#include <stdio.h> 
#include <stdbool.h>
#define max 5
void linearsearch(int n , int *array){
    int isfound = false ; 
    int foundindex = 0 ; 
    for (int i = 0 ; i < max; i++){
        if (n == *(array+i)){
            foundindex = i;
            isfound = true;  
            break;
        }
    }
    if (isfound){
        printf ("the element is found in %d index of the array\n", foundindex); 
    }
    else{
        printf ("the element is not found in the array\n"); 
    }
    
};
int main()
{
    int a[max]; 
    printf ("enter the elements of the array\n"); 
    for (int i = 0 ; i < max ; i++){
        scanf ("%d", &a[i]); 
    }
    int n; 
    printf ("enter the element to search!: ");
    scanf ("%d", &n); 
    linearsearch(n,a); 
    return 0 ; 
}

