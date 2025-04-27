#include <stdio.h>
#define SIZE 10

// Array operations  Done
int arr[SIZE], n = 0;

void insert(int pos, int value)
{
    if (n >= SIZE)
    {
        printf("Array is full\n");
        return;
    }
    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = value;
    n++;
}

void delete(int pos)
{
    if (n <= 0)
    {
        printf("Array is empty\n");
        return;
    }
    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
}

void display()
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    insert(0, 10);
    insert(1, 20);
    insert(2, 30);
    insert(2, 30);
    printf("Array after insertions: ");
    display();
    delete (1);
    printf("Array after deletion: ");
    display();
    return 0;
}
