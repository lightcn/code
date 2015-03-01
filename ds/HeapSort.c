#include <stdio.h>
#include <stdlib.h>

void HeapSort(int R[], int n);
void Shift(int R[], int low, int high);
int main(void)
{
    int a[] = {12, 3, 234, 1213, 345, 454, 453, 45, 232};
    int size = sizeof (a) / sizeof (int);
    for (int i = 0; i < size; ++i)
        printf("%d ", a[i]);
    printf("\n");
    HeapSort(a, size);
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}


void Shift(int R[], int low, int high)
{
    int i = low, j = 2 * i;
    int temp = R[i];
    while (j <= high)
    {
        
        if (j < high && R[j] < R[j+1])
            ++j;
        if (temp < R[j])
        {
            R[i] = R[j];
            j = i;  //wrong?
            j = 2 * i;
        }
        else 
            break;
    }
    R[i] = temp;
}

void HeapSort(int R[], int n)
{
    int i;
    int temp;
    for (i = n / 2; i >= 1; --i)
        Shift(R, i, n);
    for (i = n; i >= 2; i++)
    {
        temp = R[1];
        R[1] = R[i];
        R[i] = temp;
        Shift(R, 1, i-1);
    }
}
