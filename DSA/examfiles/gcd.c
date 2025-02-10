#include <stdio.h> 
int gcd(int number, int reminder){
    if (reminder == 0){
        return (number); 
    }
    else if (reminder > number){
        return gcd (reminder, number); 
    } 
    else {
        return gcd (reminder, number%reminder); 
    }
}
int main()
{
    int x = gcd(64,550); 
    printf ("%d", x); 
}