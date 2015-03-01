#include <stdio.h>
#include <stdlib.h>

void InsertSort(int R[], int n);
int main(void)
{
    int a[7] = {0, 12, 34, 5, 99, 1000, 123};
    for (int i = 0; i <= 6; i++)
        printf("%d ", a[i]);
    putchar('\n');
    InsertSort(a, 7);
    for (int i = 0; i <= 6; i++)
        printf("%d ", a[i]);
    putchar('\n');
    return 0;
}

void InsertSort(int R[], int n)
{
    int j, temp;
    for (int i = 2; i < n; i++)
    {
        temp = R[i];
        j = i - 1;
        while (j >= 1 && temp < R[j])
        {
            R[j+1] = R[j];
            j--;
        }
        R[j+1] = temp;
    }
}

