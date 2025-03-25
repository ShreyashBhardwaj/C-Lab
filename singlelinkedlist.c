#include <stdio.h>
#include <stdlib.h>

// Done

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *head = NULL;

void insert(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void delete()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    Node *temp = head;
    head = head->next;
    free(temp);
}

void display()
{
    Node *temp = head;
    while (temp)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    printf("Singly Linked List: ");
    display();
    delete ();
    printf("After deletion: ");
    display();
    return 0;
}
