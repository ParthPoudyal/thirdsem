#include <stdio.h>
#define MAX 10

void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

void bubblesort(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

int main()
{
    int a[MAX], n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    bubblesort(a, n);

    printf("The array after sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
