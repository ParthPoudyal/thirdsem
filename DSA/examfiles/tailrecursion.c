#include <stdio.h> 
int factorial (int n ,int fact){
    if (n == 0 || n == 1){
        return fact; 
    }
    else{
        return factorial(n-1, n* fact); 
    }
}
int main()
{
    printf ("%d", factorial(5,1)); 
}