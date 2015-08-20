#include <stdio.h>
#include <stdlib.h>

int a[10001];
int main(void)
{
    int n;
    scanf("%d", &n);
    int *p = a;
    while (n--)
    {
        char ch;
        scanf("%c", &ch);
        if (ch == 'P')
        {
            int temp;
            scanf("%d", &temp);
            *p++ = temp;
        }
        else if (ch == 'O')
            p--;
        else
        {
            if (p == a)
                printf("%c\n", 'E');
            else 
                printf("%d\n", *(p-1));
        }
    }
}
