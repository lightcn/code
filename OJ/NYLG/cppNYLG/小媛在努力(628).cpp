/**
 * Ð¡æÂÔÚÅ¬Á¦(628).cpp
 * Created with codeblocks
 * User: zhiliang
 * Date: 14-3-22
 * Time:      12:47
 * URL:http://acm.nyist.net/JudgeOnline/problem.php?pid=628
 */


#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m;
        scanf("%d", &m);
        int *arr = new int[m];
        int count = 1;
        for (int i = 0; i < m; ++i)
        {
            scanf("%d", &arr[i]);
            if (i > 0)
            {
                if (arr[i] == arr[i-1])
                    count++;
            }
            else
            {
                printf("%d %d ",  count, arr[i-1]);
                count = 1;
            }
        }
        printf("%d %d\n", count, arr[m-1]);
        delete [] arr;
        arr = NULL;
    }
    return 0;
}
