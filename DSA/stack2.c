#include <stdio.h> 
#include <stdbool.h>
#define size 10 

typedef struct stack {
    int top;         // pointer that points to the top of the stack
    int s[size];     // array of data for linear data structure
} Stack; 

bool isfull(Stack *s1) {
    if (s1->top == size - 1) {
        return true;
    } 
    return false;  // Ensure false is explicitly returned
}

bool isempty(Stack *s1) {
    if (s1->top == -1) {
        return true;
    }
    return false;  // Ensure false is explicitly returned
}

void createEmptyStack(Stack *s1) {
    s1->top = -1;   // defining the empty stack with top index = -1
}

void push(int x, Stack *s1) { // to push in the elements of the stack
    if (!isfull(s1)) {        // Check if the stack is full first
        s1->top++; 
        s1->s[s1->top] = x;   // Add the element to the stack
    }
}

int peek(Stack *s1) { // to get the element of the top of the stack
    if (!isempty(s1)) {
        return s1->s[s1->top];
    } 
    return -1;  // Return -1 if the stack is empty (though not printed in this case)
}

void pop(Stack *s1) { // to remove the top element of the stack
    if (!isempty(s1)) {
        --(s1->top);  // Decrement the top pointer
    }
}

int main() { 
    Stack s1;          // Create a stack
    Stack *ptr = &s1;  // Pointer referencing the stack

    createEmptyStack(ptr);  // Initialize the stack to be empty
    push(10, ptr);          // Add elements to the stack
    push(50, ptr); 
    push(70, ptr); 
    pop(ptr);               // Remove the top element
    int x;                  // Variable to store the top element of the stack
    x = peek(ptr);          // Peek the top element
    printf("The element is: %d", x); 
    return 0; 
}
