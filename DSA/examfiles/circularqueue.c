#include <stdio.h> 
#define size 5
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
    if ((ptr->front == 0 && ptr->rear== size-1)||(ptr->front == ptr->rear + 1)){
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
       ptr->rear = (ptr->rear + 1) % size;
       ptr->q[ptr->rear] = item; 
       return 1; 
    }
    else{
        printf ("is full !");
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
        ptr->front =( ptr->front + 1)% size; 
        return temp; 
    }
}
void printqueue (Queue *ptr){
    int i = ptr->front;
    while (1) {
        printf("%d\t", ptr->q[i]);
        if (i == ptr->rear) break;
        i = (i + 1) % size;
    }
    printf("\n");
}
int main()
{
    Queue q1; 
    Queue *ptr =&q1; 
    ptr->front = ptr->rear = -1 ; 

    enqueue(ptr,5); 
    enqueue(ptr,6); 
    enqueue(ptr,7); 
    enqueue(ptr,3); 
    printf ("dequeued %d \n", dequeue (ptr)) ; 
    enqueue(ptr,4); 
    enqueue (ptr,9); 
    enqueue (ptr ,10); 

    printf ("dequeued %d \n", dequeue (ptr)) ; 
    printqueue(ptr); 
}