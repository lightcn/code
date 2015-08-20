/**
 * Created with Code Blocks.
 * User: zhiliang
 * Date: 13-7-11
 * Time:      22:39
 */
// 2013-6-28 13:19
#include <stdio.h>
#include <string.h>
#include <math.h>
const int M = 1000011; // 数组要开辟的足够大，不然会发生错误
bool mark[M];

void seive_prime()
{
	memset(mark, true, sizeof(mark));
	mark[0] = mark[1] = false;
	for (int i = 2; i <= sqrt(M); i++)
	{
		if (mark[i])
		{
			for (int j = i*i;j < M; j += i)
				mark[j] = false;
		}
	}
}

int main(void)
{
	seive_prime();
	int n;
	scanf("%d", &n);
	while (n--)
	{
	    int m;
        scanf("%d", &m);
        int tmp1 = m;
		while (!mark[tmp1])
        {
            tmp1++;
        }

        int tmp2 = m;
        while (!mark[tmp2])
        {
            tmp2--;
        }

        if ((tmp1 - m) >= (m - tmp2))
        {
            printf("%d %d\n", tmp2, m - tmp2);
        }
        else
        {
            printf("%d %d\n", tmp1, tmp1 - m);
        }

	}
	return 0;
}

