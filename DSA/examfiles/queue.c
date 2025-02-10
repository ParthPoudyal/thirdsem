#include <stdio.h> 
#define size 10
typedef struct queue{
    int  q[size]; 
    int front; 
    int rear; 
}Queue;  
int isEmpty(Queue *ptr){
    if (ptr->front== -1 && ptr->rear == -1){
        return 1; 
    }
    else  return 0;
}
int isFull (Queue *ptr){
    if (ptr->rear == size-1){
        return 1; 
    }
    else return 0;
}
int enqueue (Queue *ptr, int item){
    if (isEmpty(ptr)){
        ptr->front = ptr->rear = 0;
        ptr->q[ptr->rear] = item; 
        return 1; 
    }
    else if (!isFull(ptr)){
       ptr->rear++;
       ptr->q[ptr->rear] = item; 
       return 1; 
    }
    else{
        return -1; 
    }
}
int dequeue (Queue *ptr){
    if (isEmpty(ptr)){
        printf ("queue is empty"); 
    }
    else if (ptr->front == ptr->rear){
        ptr->front = ptr->rear = -1; 
    }
    else{
        int temp = ptr->q[ptr->front]; 
        ptr->front++; 
        return temp; 
    }
}
void printqueue (Queue *ptr){
    // if (!isEmpty(ptr)){
        printf ("the elements of the queue are:\n"); 
        for (int i = (ptr->front) ; i <= (ptr->rear) ; i++){
            printf ("%d\t", ptr->q[i]); 
        }
    // }
}
int main()
{
    Queue q1; 
    Queue *ptr =&q1; 
    ptr->front = ptr->rear = -1 ; 

    enqueue(ptr,5); 
    enqueue(ptr,6); 
    enqueue(ptr,7); 

    printf ("dequeued %d: ", dequeue (ptr)) ; 
    printqueue(ptr); 
}