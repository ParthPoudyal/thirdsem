#include <stdio.h> 
int main()
{
    int i , temp , hole ; 
    int n = 6; 
    int a[]= {5,4,10,1,6,2};

    printf ("\n Before sort : \n") ; 
    for (int i = 0 ; i < n ; i++){
        printf ("%d\t ", a[i]); 
    }

    for (int i = 1 ; i < n ; i++){ // assuming that the first element needs no sorting
        temp = a[i]; 
        hole = i ; // stores the index of the hole

        while (hole > 0 && a [hole - 1] > temp){
            a[hole] = a[hole - 1]; 
            hole = hole - 1; 
        }
        a[hole] = temp; 
    }
    printf ("\n after insertion sort: \n"); 
    
    for (int i = 0 ; i < n ; i++){
        printf ("%d\t ", a[i]); 
    }
    
}