#include <stdio.h>
#include <string.h>
#define size 10

char s[size];
int top = -1;

int isFull() {
    return (top == size - 1);
}

int isEmpty() {
    return (top == -1);
}

void push(char item) {
    if (!isFull()) {
        s[++top] = item;
    } else {
        printf("Stack is full, cannot push '%c'.\n", item);
    }
}

char pop() {
    if (!isEmpty()) {
        return s[top--];
    } else {
        printf("Stack is empty, cannot pop.\n");
        return '\0'; // Return null character as error indicator
    }
}

char peek() {
    if (!isEmpty()) {
        return s[top];
    } else {
        printf("Stack is empty, cannot peek.\n");
        return '\0';
    }
} 
int checkOperands(char ch) {
    return (ch >= '0' && ch <= '9');
}
void postfixtoinfix(char *expression){
    for (int i = 0 ; expression[i]; i++){
        if (checkOperands(expression[i])){
            push(expression[i]-'0');
        }
    }
}