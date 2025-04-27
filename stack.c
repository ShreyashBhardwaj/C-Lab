#include <stdio.h>
#define SIZE 5

// Done1
int stack[SIZE], top = -1;

void push(int value)
{
    if (top == SIZE - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = value;
}

void pop()
{
    if (top == -1)
        printf("Stack Underflow\n");
    else
        top--;
}

void display()
{
    int i;
    if (top == -1)
        printf("Stack is empty\n");
    else
    {
        for (int i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    printf("Stack after push operations: ");
    display();
    pop();
    printf("Stack after pop operation: ");
    display();
    return 0;
}
