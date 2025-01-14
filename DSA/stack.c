#include <stdio.h> 
#include <stdbool.h>
#define size 10 

typedef struct stack {
    int top;         
    int s[size];     
} Stack; 

bool isfull(Stack *s1) {
    if (s1->top == size - 1) {
        return true;
    } 
    return false;
}

bool isempty(Stack *s1) {
    if (s1->top == -1) {
        return true;
    }
    return 0;
}

void createEmptyStack(Stack *s1) {
    s1->top = -1;
}

void push(int x, Stack *s1) {
    if (!isfull(s1)) {        
        s1->top++; 
        s1->s[s1->top] = x;
    }
}

int peek(Stack *s1) {
    if (!isempty(s1)) {
        return s1->s[s1->top];
    } 
    return -1;
}

void pop(Stack *s1) {
    if (!isempty(s1)) {
        --(s1->top);
    }
}

void displayStack(Stack *s1) {
    if (isempty(s1)) {
        printf("The stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= s1->top; i++) {
            printf("%d ", s1->s[i]);
        }
        printf("\n");
    }
}

int main() {
    Stack s1;          
    Stack *ptr = &s1;  
    int opt; 
    char ch; 
    int x_input, y_output; 
    do {
        printf("WELCOME TO STACK WORLD\n"); 
        printf("1. Create a new stack\n"); 
        printf("2. Check if the stack is empty\n"); 
        printf("3. Check if full\n"); 
        printf("4. Push option\n"); 
        printf("5. Pop option\n"); 
        printf("6. Peek Option\n"); 
        printf("7. Display the stack\n"); 
        printf("Enter no from 1 - 7 to perform an operation: "); 
        scanf("%d", &opt);
        switch (opt) {
            case (1):
                createEmptyStack(ptr);  
                printf("New stack is created\n");
                break;
            case (2):
                if (isempty(ptr)) {
                    printf("The stack is empty\n"); 
                } else {
                    printf("The stack is not empty\n"); 
                }
                break;
            case (3):
                if (isfull(ptr)) {
                    printf("The stack is full\n"); 
                } else {
                    printf("The stack is not full\n"); 
                }
                break;
            case (4):
                printf("Enter a number to input in the stack: "); 
                scanf("%d", &x_input); 
                push(x_input, ptr); 
                printf("The new item %d is pushed\n", x_input); 
                break; 
            case (5):
                pop(ptr); 
                printf("An element is popped!\n"); 
                break;
            case (6):
                y_output = peek(ptr); 
                printf("The element on the top of the stack is %d\n", y_output); 
                break;
            case (7):
                displayStack(ptr);
                break;
            default:
                printf("Invalid operation number\n"); 
        } 
        printf("Do you want to continue? (y/n): "); 
        scanf(" %c", &ch);
    } while (ch == 'y'); 
    
    printf("BYE BYE\n"); 
    return 0; 
}
