#include <stdio.h>
int towerhanoi (int n, char s, char d, char a){
    if (n == 1){
        printf ("\n Move disk 1 from peg %c to peg %c", s, d); 
    }
    towerhanoi(n-1, s,a,d); 
    printf("\n Move disk %d from peg %c to peg %c",n,s,d); 
    towerhanoi(n-1,a,d,s); 
}
int main()
{
    int num; 
    char s,d,a; 
    printf ("enter the number of disks: "); 
    scanf ("%d", &num); 
    printf ("the serquence of moves involved in teh tower of Hanoi are: \n"); 
    towerhanoi(num, s,d,a); 
}