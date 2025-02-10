#include <stdio.h> 
int recur (int x){
    if (x == 0){
        return 1; 
    }
    else{
        return (x* recur(x-1));   
    }
};
int main(){
    // factorial using recursion
    printf ("%d",recur(5)); 
}