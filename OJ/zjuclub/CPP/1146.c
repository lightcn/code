#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(void)
{
    int a, b, c;
    while (scanf("%d%d%d", &a, &b, &c) == 3)
    {
        if (a > b)
            swap(&a, &b);
        if (b > c)
            swap(&b, &c);
        if (a > b)
            swap(&a, &b);
        printf("%d %d %d\n", a, b, c);
    }
    return 0;
}
