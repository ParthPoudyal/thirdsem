#include <stdio.h>
#include <string.h>
#define size 100
typedef struct stack
{
    int top;
    char s[size];
} Stack;
int isEmpty(Stack *ptr)
{
    if (ptr->top == -1)
    {
        printf("the stack is empty\n");
        return 1;
    }
    else
    {
        return 0;
    }
};
int isFull(Stack *ptr)
{
    if (ptr->top == size - 1)
    {
        printf("the stack is full\n");
        return 1;
    }
    else
    {
        return 0;
    }
};
void push(Stack *ptr, char element)
{
    if (!isFull(ptr))
    {
        ptr->top++;
        ptr->s[ptr->top] = element;
        printf("%c is pushed in the stack\n", element);
        if (ptr->top == size - 1)
        {
            printf("last push operation done\n");
        }
    }
    else
    {
        printf("could not push in the element , stack is full\n");
    }
};
void pop(Stack *ptr)
{
    if (!isEmpty(ptr))
    {
        ptr->top--;
        if (ptr->top == -1)
        {
            printf("last pop operation done\n");
        }
    }
    else
    {
        printf("could not perform pop operation , stack is already empty\n");
    }
};
char peek(Stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("there are no elements in the stack");
    }
    else
    {
        ptr->s[ptr->top];
        return (ptr->s[ptr->top]);
    }
};
void display(Stack *ptr)
{
    if (!isEmpty(ptr))
    {
        printf("showing the elements of the stack :\n");
        for (int i = 0; i <= ptr->top; i++)
        {
            printf("%c\t", ptr->s[i]);
        }
    }
    else
    {
        printf("The stack is empty ! nothing to display\n");
    }
};

int checkbalanced (char *expression, int len, Stack *ptr){
    for (int i = 0 ;i < len ; i++){
        if (expression[i] == '('){
            push(ptr, expression[i]); 
        }
        else if (expression[i] == ')'){
            if (ptr->top == -1){
                return 0; 
            }
            else {
                if (ptr ->s[ptr->top] == '(')
                pop(ptr); 
                continue;
            }
        }
    }
    if (ptr->top < 0){
        return 1; 
    }
    else return 0 ; 
}; 
int main(){
    char expression[] = "(a + b *(c+d)))"; 
    int lenght; 
    lenght = strlen(expression); 
    Stack s1; 
    Stack *ptr = &s1; 
    s1.top = -1;  //intializing the stack

    checkbalanced(expression, lenght,ptr)? printf("is balanced\n") : printf ("is not balanced\n"); 
    return 0 ; 
}