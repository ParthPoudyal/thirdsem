#include <stdio.h> 
int main()
{
   int a[] =  {1, 3, 7, 12, 22, 35, 50, 75, 105}; 
    int num = 10; 
    // for binary search 
    int first = 0 ; 
    int last = sizeof(a)/(sizeof(int)) - 1;
    int middle = (first + last)/2; 
    int is_found = -1; 
    while (first <= last)
    {
        if (num == a[middle]){
        printf ("the number has been found in the %d index", middle); 
        is_found = middle;
        break; 
        }
        else if (num < a[middle]){
            last = middle - 1; 
        }
        else if (num > a[middle]){
            first = middle + 1; 
            
        }
        middle = (first + last)/ 2; 
    }
    if (is_found == -1){
        printf ("is not found"); 
    }
    

}