#include <stdio.h>
#define size 6
void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
int split(int *a, int lb, int ub)
{
    int pivot = a[lb];
    int start = lb;
    int end = ub;
    while (a[start] <= pivot) //increasing the start pointer by 1 on start pointed < pivot
    {
        start++; 
    }
    while (a[end] > pivot){ //decrementing the end pointer by 1 on end pointed > pivot
        end--; 
    }
    if (start < end){
        swap(&a[lb], &a[end]); //swapping pivot and the element pointed by the end pointer
    }
    else{
        swap(&a[start], &a[end]); //swapping start pointer and end pointer element 
    }
    return end;  
};
int main()
{
    int a[6] = {24, 9, 29, 14, 19, 27};
}