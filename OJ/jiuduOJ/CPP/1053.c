#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

typedef struct 
{
    int value;
    int pos;
}T;
T min, max;
int main(void)
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        int *arr = malloc(sizeof(int) * n);
        max.value = INT_MIN;
        min.value = INT_MAX;
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max.value)
            {
                max.value = arr[i];
                max.pos = i;
            }
            if (arr[i] < min.value)
            {
                min.value = arr[i];
                min.pos = i;
            }
        }
        int temp = arr[max.pos];
        arr[max.pos] = arr[min.pos];
        arr[min.pos] = temp;
        for (int i = 0; i < n; i++)
        {
            if (0 == i)
                printf("%d", arr[i]);
            else
                printf(" %d", arr[i]);
        }
        putchar('\n');
        free(arr);
    }
    return 0;
}
