/*
ID:1333
author:zzl
E-mail:zhilight@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[16] = {0};
    char b[16] = {0};
    while (~scanf("%s%s", a, b))
    {
        int result = strcmp(a, b);
        if (result < 0)
            printf("%s<%s\n", a, b);
        else if (result > 0)
            printf("%s>%s\n", a, b);
        else
            printf("%s=%s\n", a, b);
    }
    return 0;
}
