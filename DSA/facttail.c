#include <stdio.h> 
int fact(int, int); 
int main()
{
    int x = 5; 
    int y = factorial(x, 1); 
    printf ("%d", y); 
    
}
int factorial (int x, int fact){
    if (x==1){
        return fact;
    }
    else{
        
        return factorial(x-1, fact*x); 
    }
}