#include <stdio.h> 
int fact (int n){
    if (n == 0){
        return n; 
    }
    else{
        return (fact(n-1)+2); 
    }
}
int main(){
    printf ("%d", fact(3)); 
}