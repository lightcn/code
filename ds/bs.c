#include <stdio.h>
#include <stdlib.h>

int *binsearch(int arr[], int size, int key);
int main(void)
{
    int arr[] = {1, 2, 4, 6, 7, 12, 34, 55, 90};
    int size = sizeof(arr) / sizeof(int);
    int *retval = binsearch(arr, size, 5);
    if (retval == NULL)
        printf("Can't find the key in the array!\n"); 
    retval = binsearch(arr, size, 5);
    if (retval != NULL)
        printf("Got it!\n"); 
    return 0;
}

int *binsearch(int arr[], int size, int key)
{
    int *first = arr;
    int *last = first + (size-1);
    int *mid;
    while ((last-first) > 0)
    {
        mid = (last - first) / 2 + first;
        if (*mid == key)
            return mid;
        else if (*mid > key)
            first = mid - 1;
        else
            last = mid + 1;
    }
    return NULL;
}
