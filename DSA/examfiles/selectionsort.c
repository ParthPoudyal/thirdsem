#include <stdio.h> 
int swapper(int *a, int *b){
    int temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 
}
int main()
{
    int array[]= {34, 11, 24, 44, 43, 98, 59, 71}; 

    int n = sizeof(array)/ sizeof(int); 


    printf ("before selection sort : \n"); 
    for (int i = 0 ; i < n ; i++){
        printf ("%d\t", array[i]); 
    }

    for (int i = 0 ; i < n - 1 ; i++){
        int min = i ; 
        for (int j = i + 1 ; j < n ; j++){
            
            if (array[j]< array[min]){
                min = j ; 
            }
        }
        swapper(&array[min], &array[i]); 
    }

    printf ("after selection sort : \n"); 
    for (int i = 0 ; i < n ; i++){
        printf ("%d\t", array[i]); 
    }



}