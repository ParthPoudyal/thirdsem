#include <stdio.h> 
int linearsearch(int *a, int n){
     int size = 7; 
     for (int i = 0 ; i < size ; i++){
        if (a[i] == n){
            return i; 
        }
    }
    return -1; 
}; 
int main()
{
    int num; 
    int a[] = {2, 3, 7, 7, 11, 15, 25}; 
    printf ("enter the element to search"); 
    scanf ("%d", &num); 
    int index = linearsearch (a, num); 
    if (index == -1){
        printf ("element is not found!"); 
    }
    else{
       printf ("element is found in the index : %d" , index);  
    }
    
}