#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *ptr = NULL, sum = 0, choice;
    printf("Enter 1 for malloc, 2 for calloc, and 3 for realloc: ");
    scanf("%d", &choice);  

    switch (choice) {
    case 1:
        printf("Enter the size of the array: ");
        scanf("%d", &n);
        ptr = (int *)malloc(n * sizeof(int));

        if (ptr == NULL) {
            printf("Error allocating memory\n");
            return 1;
        }
        for (int i = 0; i < n; i++) {
            printf("Enter %d element: ", i + 1);
            scanf("%d", (ptr + i));
            sum += *(ptr + i);
        }
        printf("The sum is: %d\n", sum);
        free(ptr);
        break;

    case 2:
        printf("Enter the size of the array: ");
        scanf("%d", &n);
        ptr = (int *)calloc(n, sizeof(int));
        if (ptr == NULL) {
            printf("Error allocating memory\n");
            return 1;
        }
        for (int i = 0; i < n; i++) {
            printf("Enter %d element: ", i + 1);
            scanf("%d", (ptr + i));
            sum += *(ptr + i);
        }
        printf("The sum is: %d\n", sum);
        free(ptr);
        break;

    case 3:
        printf("Enter the initial size of the array: ");
        scanf("%d", &n);
        ptr = (int *)malloc(n * sizeof(int));
        if (ptr == NULL) {
            printf("Error allocating memory\n");
            return 1;
        }

        for (int i = 0; i < n; i++) {
            printf("Enter %d element: ", i + 1);
            scanf("%d", (ptr + i));
            sum += *(ptr + i);
        }
        printf("Enter the new size of the array: ");
        int n2;
        scanf("%d", &n2);
        ptr = (int *)realloc(ptr, n2 * sizeof(int));
        if (ptr == NULL) {
            printf("Error reallocating memory\n");
            return 1;
        }
        for (int i = n; i < n2; i++) {
            printf("Enter %d element: ", i + 1);
            scanf("%d", (ptr + i));
            sum += *(ptr + i);
        }

        printf("The sum is: %d\n", sum);
        free(ptr);
        break;

    default:
        printf("Please enter a valid choice.\n");
        break;
    }

    return 0;
}
