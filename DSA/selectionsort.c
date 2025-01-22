#include <stdio.h> 
#define size 10 

void swap(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}

void selectionsort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) { 
        int min = i; 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }     
        }
        if (min != i) { 
            swap(&arr[i], &arr[min]); 
        }
    }
}

int main() {
    int a[size];
    int n;  

    printf("Enter the size of the array: "); 
    scanf("%d", &n); 

    printf("Enter the elements of the array: "); 
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]); 
    }

    printf("Applying selection sort...\n"); 
    selectionsort(a, n); 

    printf("Elements after selection sort are:\n"); 
    for (int i = 0; i < n; i++) {
        printf("%d\n", a[i]); 
    }

    return 0;
}
