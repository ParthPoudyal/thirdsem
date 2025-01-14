// implementing a linear queue
#include <stdio.h> 
#define max 10
typedef struct queue{
    int q[max]; 
    int front; 
    int rear;  
}Queue; 

void createQueue (Queue *q1){
    q1->front = -1; 
    q1->rear = -1; 
    printf ("new queue is created\n"); 
}
int isempty(Queue *q1){
    if (q1->rear == -1 && q1->front == -1){
        printf ("the queue is empty\n"); 
        return 1; 
    }
    return 0; 
}
int isfull (Queue *q1){
    if (q1->rear == max-1 && q1->front == 0){
        printf ("the queue is full\n"); 
        return 1; 
    }
    return 0; 
}
void enqueue (Queue *q1, int item){
    if (!isfull(q1)){
        if (isempty){
            q1->front = q1->rear = 0; 
            q1->q[q1->rear]= item; 
            q1->rear++; 
            printf ("%d is placed in queue\n",item); 
        }
        else{ 
            q1->q[q1->rear]= item;  
            q1->rear++; 
            printf ("%d is placed in queue\n",item);
        }
    }   
    else{
        printf ("the queue is full, cannot enter the data\n"); 
    }
}
void dequeue (Queue *q1){
    if (isempty(q1)){
        printf ("cannot dequeue\n"); 
    }
    else if (q1->front == q1->rear){
        q1->front = q1->rear = -1; 
        printf ("last dequeue\n");
    }
    else{
        q1->front ++;
        printf ("dequeue done\n");
    }

}
int main(){
    Queue q1; 
    Queue *ptr = &q1; 
    
    createQueue(ptr); 
    enqueue (ptr, 2);
    enqueue (ptr, 5);
    dequeue(ptr);
    isempty(ptr); 
    return 0;  
}
