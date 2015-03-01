#include <stdio.h>
int main(void)
{
//    freopen("in.txt", "r", stdin);
  //  freopen("out.txt", "w", stdout);

    int a, b, k;
    while (scanf("%d%d%d", &a, &b, &k) == 3)
    {
        if ((0 == a) && (0 == b))
            return 0;
        if (0 == k)
            printf("-1\n");
        else
        {
            int at = a, bt = b;
            int flag = 0;
            while (k)
            {
                k--;
                if ((a % 10) == (b % 10))
                {
                    a /= 10;
                    b /= 10;
                    continue;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
                printf("%d\n", at + bt);
            else
                printf("-1\n");
        }
    }
  //  fclose(stdin);
  //  fclose(stdout);
    return 0;
}
