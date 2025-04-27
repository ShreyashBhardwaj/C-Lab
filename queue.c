#include <stdio.h>
#define SIZE 5

// Done 1
int queue[SIZE], front = -1, rear = -1;

void enqueue(int value)
{
    if (rear == SIZE - 1)
        printf("Queue Overflow\n");
    else
    {
        if (front == -1)
            front = 0;
        queue[++rear] = value;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
        printf("Queue Underflow\n");
    else
        front++;
}

void display()
{
    if (front == -1 || front > rear)
        printf("Queue is empty\n");
    else
    {
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("Queue after enqueue operations: ");
    display();
    dequeue();
    printf("Queue after dequeue operation: ");
    display();
    return 0;
}
