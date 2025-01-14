#include <stdio.h> 
int hcf(int, int); 
int main(){
    int num1, num2; 
    num1 = 30; 
    num2 = 98; 
    int x = hcf (num1, num2); 
    printf ("the gcd: %d", x); 

}
int hcf (int x, int y){
    if (x == 0)
    {
        return y; 
    }
    if (y == 0 )
    {
        return x; 
    }
    return hcf(y, x%y); 
}