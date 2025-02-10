#include <stdio.h> 

void display (int a[], int n){
        for (int i = 0 ; i < n ; i++){
            printf ("%d\t",a[i]); 
        }
}
int main()
{
    int i , temp, hole; 
    int n = 6; 
    int a[]= {5,4,10,1,6,2}; 

    printf ("\n Before sort: \n"); 
    display (a,n); 

    for (int i = 1; i < n ; i++){
        temp = a[i]; 
        hole = i; 
    
        while (hole > 0 && a[hole -1]>temp){
            a[hole] = a[hole-1]; 
            hole = hole - 1; 
        }
    a[hole] = temp; 
    }
    printf ("\n After sort: \n"); 
    display (a,n); 
}