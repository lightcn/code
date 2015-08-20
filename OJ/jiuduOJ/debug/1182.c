#include <stdio.h>
#include <string.h>

char str[10240];
int wc[2560];
int main(void)
{
    while (gets(str))
    {
        int len = 0;
        int l = strlen(str);
        while (str[len] != '.' && (len < l))
            len++;
        while (str[len-1] == ' ')
            len--;
        int cnt = 0;
        int temp = 0;
        for (int i = 0; i < len; i++)
        {
            if (str[i] != ' ')
                ++temp;
            else
            {
                wc[cnt++] = temp;
                temp = 0;
            }
        }
        wc[cnt++] = temp;
        for (int i = 0; i < cnt; i++)
        {
            if (0 == i)
                printf("%d", wc[i]);
            else
                printf(" %d", wc[i]);
        }
        putchar('\n');
    }
    return 0;
}
