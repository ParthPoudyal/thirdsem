#include <stdio.h> 
int fibonacci (int n){
    if (n == 0 || n == 1){
    }
    else {
        int x = fibonacci (n-1) + fibonacci (n); 
        printf("%d", x); 
    }
}
int main()
{
    int a, b, num;
    printf ("enter to the nth term to find the fibonacci series\n"); 
    scanf ("%d", &num); 
    printf ("enter the first two elements of the series\n"); 
    scanf ("%d%d", &a,&b);  
    fibonacci(num); 
}