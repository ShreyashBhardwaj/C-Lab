#include <stdio.h>

int binarysearch(int n, int arr[], int key)
{
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8;
    int searchResult = binarysearch(n, arr, key);
    printf("Result of Binary Search is %d\n", searchResult);
    getch();
    return 0;
}