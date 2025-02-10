#include <stdio.h>
#define size 5
typedef struct stack
{
    int top;
    int s[size];
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
void push(Stack *ptr, int element)
{
    if (!isFull(ptr))
    {
        ptr->top++;
        ptr->s[ptr->top] = element;
        printf("%d is pushed in the stack\n", element);
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
int peek(Stack *ptr)
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
int display(Stack *ptr)
{
    if (!isEmpty(ptr))
    {
        printf("showing the elements of the stack :\n");
        for (int i = 0; i <= ptr->top; i++)
        {
            printf("%d\t", ptr->s[i]);
        }
    }
    else
    {
        printf("The stack is empty ! nothing to display\n");
    }
};
int main()
{
    Stack s1;
    Stack *ptr = &s1;
    s1.top = -1; //creating a new stack; 
    
    push(ptr, 5);
    push(ptr, 6);
    push(ptr, 7);
    display(ptr);
    return 0;
}