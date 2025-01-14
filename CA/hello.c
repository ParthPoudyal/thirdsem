#include <stdio.h> 
#include <conio.h> 
void  binary (int a){
    int i, k;
    for (i = 3; i >=0 ; i--){
        k = (a >> i )&1; 
        printf ("%d",k); 
    }
}; 
int main()
{
    int num; 
    printf ("enter a number"); 
    scanf ("%d", &num); 
    printf ("the hex eq is : %x\n", num); 
    printf ("the octal eq is : %o\n", num); 
    printf ("the binary eq is :"); 
    binary(num); 
    printf ("\n"); 

    return 0 ; 
}