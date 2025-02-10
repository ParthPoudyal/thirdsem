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
    return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}

int precedence(char ch) {
    switch (ch) {
        case '^':
            return 3;
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return -1;
    }
}

void infixToPostfix(char *expression, int n) {
    char result[n];
    int j = 0; 

    for (int i = 0; expression[i]; i++) {
        if (checkOperands(expression[i])) {
            result[j++] = expression[i];
        } else if (expression[i] == '(') {
            push(expression[i]);
        } else if (expression[i] == ')') {
            while (!isEmpty() && peek() != '(') {
                result[j++] = pop();
            }
            if (!isEmpty() && peek() == '(') {
                pop(); 
            }
        } else {
            while (!isEmpty() && precedence(expression[i]) <= precedence(peek())) {
                result[j++] = pop();
            }
            push(expression[i]);
        }
    }

    
    while (!isEmpty()) {
        result[j++] = pop();
    }

    result[j] = '\0'; 
    printf("The postfix expression is: %s\n", result);
}

int main() {
    char expression[] = "a+b-c*(d+e)";
    int n = strlen(expression);

    infixToPostfix(expression, n);

    return 0;
}
