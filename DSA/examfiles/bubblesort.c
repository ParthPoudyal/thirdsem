#include <stdio.h> 
int swapper(int *a, int *b){
    int temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 
}
int main()
{
    int array[]= {3,8,1,2,6}; 

    int n = sizeof(array)/ sizeof(int); 


    printf ("before bubble sort : \n"); 
    for (int i = 0 ; i < n ; i++){
        printf ("%d\t", array[i]); 
    }
    // bubble sorting algorithm
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n - i - 1; j++){
            if (array[j] > array[j+1]){
                swapper(&array[j],&array[j+1]);
            }
        }
    }
    printf ("\nafter bubble sort : \n"); 
    for (int i = 0 ; i < n ; i++){
        printf ("%d\t", array[i]); 
    }

}