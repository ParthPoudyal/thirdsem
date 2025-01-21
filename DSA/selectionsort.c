#include <stdio.h> 
#define size 10 
void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
void selectionsort (int *arr, int n){
    for (int i = 0; i < n ; i++){
        int min = i; 
        for (int j = i+1 ; j < n ; j++){
            if (arr[j] < arr[min]){
                swap(&arr[j], &arr[min]); 
            }     
        }  
    }
}
int main()
{
    int a[size];
    int n;  
    printf ("enter the size of the array"); 
    scanf ("%d", &n); 
    printf ("enter the elements of the array"); 
    for (int i = 0 ; i < n ; i++){
        scanf ("%d", &a[i]); 
    }
    printf ("to apply selectionsort\n"); 
    selectionsort(a, n); 
    printf ("elements after selection sort is\n"); 
    for (int i = 0 ; i < n ; i++){
        printf ("%d\n", a[i]); 
    }
}