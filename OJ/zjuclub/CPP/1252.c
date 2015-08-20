#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[210];
    char str2[100];
    while (gets(str1))
    {
        gets(str2);
        strcat(str1, str2);
        printf("%s\n", str1);
    }
    return 0;
}
