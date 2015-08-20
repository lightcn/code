#include <stdio.h>

int main(void)
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        if (n % 3 == 0 && n % 5 == 0)
            printf("can\n");
        else
            printf("cannot\n");
    }
    return 0;
}
