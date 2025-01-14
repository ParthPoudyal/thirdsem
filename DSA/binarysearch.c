#include <stdio.h> 
#include <stdbool.h>
#define max 5
void sort(int *array){
    for (int i = 0; i < max; i++){
        for (int j = i+1; j < max; j++){
            if (array[j] < array[i]){
                int temp = array[j]; 
                array[j] = array[i]; 
                array[i] = temp;
            }
        }
    }
}
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


int binarysearch(int n, int *array){
    int firstindex = 0 ; 
    int lastindex = max-1; 

    while (firstindex <=lastindex){
        int midindex =(firstindex+lastindex)/2; 
        if (array[midindex] == n){
            return (midindex);  
        }
        else if (n > array[midindex]){
            firstindex =midindex+1; 
        }
        else if (n < array[midindex]){
            lastindex = midindex - 1; 
        }
    }
    return -1; 
    
}


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

    printf ("\nprinting element by linear search: \n"); 
    linearsearch(n, a) ; 

    printf ("\nprinting element by binary search: \n");
    sort(a);
    int foundindex = binarysearch(n, a);
    if (foundindex >= 0){
        printf ("the element is found in index : %d\n",foundindex); 
    }
    else{
        printf ("not found in the array !\n");
    }
}

