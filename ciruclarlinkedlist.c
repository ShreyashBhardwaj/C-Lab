#include <stdio.h>
#include <stdlib.h>

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
    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
    }
    else
    {
        Node *temp = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = newNode;
        newNode->next = head;
    }
}

void delete()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    Node *temp = head, *prev = NULL;
    while (temp->next != head)
        prev = temp, temp = temp->next;
    if (temp == head)
    {
        free(head);
        head = NULL;
    }
    else
    {
        prev->next = head;
        free(temp);
    }
}

void display()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    Node *temp = head;
    do
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    printf("Circular Linked List: ");
    display();
    delete ();
    printf("After deletion: ");
    display();
    return 0;
}
