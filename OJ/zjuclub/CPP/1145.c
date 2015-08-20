#include <stdio.h>

int main(void)
{
    int temp = -10000000;
    int num;
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        if (num > temp)
            temp = num;
    }
    printf("%d\n", temp);
    return 0;
}
