#include <stdio.h>
int binsearch(int arr[], int size, data);
int main(void)
{
    while (1)
    {
        int arr[5];
        for (int i = 0; i < 5; ++i)
            scanf("%d", &arr[i]);
        int data;
        scanf("%d", &data);
    }
    return 0;
}


/* 分别通过数组和指针方式完成二分查找 */
int binsearch(int arr[], int size, int data)
{
    int low = 0;
    int high = size - 1;
    int mid = (low + high) / 2;
    while (low < high)
    {
        if (arr[mid] == data)
            return mid + 1;
        else if (data > arr[low])
        {
            high = mid - 1;
            mid = (low + high) / 2;
        }
        else 
        {
            low = mid + 1;
            mid = (low + high) / 2; 
        }
    }
    return -1;
}
