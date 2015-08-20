#include <stdio.h>

int main(void)
{
    int a, b, c;
    while (scanf("%d,%d,%d", &a, &b, &c) != EOF)
    {
        if (b > a)
            a = b;
        if (c > a)
            a = c;
        printf("max=%d\n", a);
    }
    return 0;
}
