#include <stdio.h>
#include <string.h>

int main(void)
{
    char ch[201];
    int l = 0;
    while (scanf("%s", ch) != EOF)
    {
        l = strlen(ch);
        for (int i = (l - 1); i >= 0; i--)
        {
            putchar(ch[i]);
        }
        putchar('\n');
    }
    return 0;
}
