#include <stdio.h>

int a[200], b[100];

void input(int *arr, int size);
void output(int *arr, int size);

int main(void)
{
   int m, n;
   while (scanf("%d", &m) == 1)
   {
       input(a, m);
       scanf("%d", &n);
       input(b, n);
       for (int i = 0; i < n; i++)
       {
           int j;
           for (j = 0; j < m; ++j)
           {
               if (b[i] > a[j])
                   continue;
               else
                   break;
           }
          // while (b[i] > a[j])
          //     j++;
           int t = m;
           while (t >= j)
           {
               a[t] = a[t-1];
               t--;
           }
           a[j] = b[i];
           m++;
       }
       output(a, m);
   }

   return 0;
}
void input(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
        scanf("%d", &arr[i]);
}
void output(int *arr, int size)
{
    int flag = 1;
    for (int i = 0; i < size; ++i)
    {
        if (flag)
        {
            printf("%d", arr[i]);
            flag = 0;
        }
        else printf(" %d", arr[i]);
    }
    putchar('\n');
}














