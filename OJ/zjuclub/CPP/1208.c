#include <stdio.h>
int main(void)
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        int cnt = 1;
        for (int i = n-1; i > 0; i--)
        {
            cnt = (cnt + 1) * 2;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
