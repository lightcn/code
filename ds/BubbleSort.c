#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int R[], int n);
int main(void)
{
    int a[5] = {12, 13, 9, 1, 5};
    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);
    putchar('\n');

    BubbleSort(a, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    putchar('\n');

    return 0;
}

void BubbleSort(int R[], int n)
{
    int flag, temp;
    for (int i = n-1; i >= 1; --i)
    {
        flag = 1;
        for (int j = 0; j < i; j++)
            if (R[j] > R[j+1])
            {
                temp = R[j];
                R[j] = R[j+1];
                R[j+1] = temp;
                flag = 0;
            }
        if (flag)
            break;
    }
}
