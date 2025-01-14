#include <stdio.h> 
int multiplication(int n){
    if (n == 0){
        return 0; 
    }
    else {
        return multiplication(n-1)+ 3; 
    }
}
int factorial (int n){
    if (n == 0){
        return 0 ; 
    }
    else{
        return factorial(n-1)* n ; 
    }
}
int fibonacci (int n){
    if (n == 1 || n == 0){
        return n;
    }
    else{
        return fibonacci (n)+ fibonacci (n-1); 
    }
}
int main()
{
    int x = multiplication (5); 
    int y = fibonacci(5); 
    printf("%d", x); 
    printf("%d", y); 

}