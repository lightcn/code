#include <stdio.h>
int main(int argc, char *argv[])
{
    int a, b;
    bool flag;
    while (~scanf("%d %d", &a, &b))
    {
        if (a == 0 && b == 0)
            break;
        a *= 100;
        flag = false;
        for (int i = 0; i <= 99; ++i)
        {
           if ((a + i) % b == 0)
           {
               
               if (flag)
               {
                 if (i < 10)   
                     printf(" 0%d", i);
                 else
                    printf(" %", i);
               }
               else
               {
                    flag = true;
                    printf("%d ", i);
               }
           }
        }   
        printf("\n");
    }
    return 0;
}
