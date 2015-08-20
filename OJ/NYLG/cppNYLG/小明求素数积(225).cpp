/**
 * Created with C-Free.
 * User: zhiliang
 * Date: 13-7-21
 * Time:     22:42
 * To change this template use File | Settings | File Templates.
 */
#include <stdio.h>
#include <math.h>
#include <string.h>
const int M = 1010;
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
		int num;
		scanf("%d", &num);
		int i;
		int mul = 1;
		for (i = 2; i <= num; i++)
		{
			if (mark[i])
			{
				mul *= i;
				mul %= 1000000;
			}		
		}
		printf("%d\n", mul);
	}
	return 0;
}