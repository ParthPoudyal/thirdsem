#include <stdio.h>
#include <time.h>

void myFunction(int n){
    int sum = 0 ; 
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            sum = sum + n ; 
        }
    }
    printf("the sum goes up to %d is %d",n,sum); 
}; 

int main(){
    long int n =999;
    clock_t start, end; 
    double cpu_time_used; 

    start= clock(); 
    myFunction(n); 
    end = clock(); 

    cpu_time_used= ((double)(end-start))/CLOCKS_PER_SEC; 
    printf("Execution time : %f seconds \n ", cpu_time_used); 
}