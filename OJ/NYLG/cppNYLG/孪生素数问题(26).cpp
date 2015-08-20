// 2013-6-28 13:19
#include <stdio.h>
#include <string.h>
#include <math.h>
const int M = 1000000;
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
		int cnt(0);
		int m;
		scanf("%d", &m);
		if (m == 3)
		{
			printf("1\n");
		}
		else
		{
			for (int i = 1; i <= (m-2); i++)
			{
				if ((mark[i] && mark[i+1]) || (mark[i] && mark[i+2]))
					cnt++;
			}
			printf("%d\n", cnt);
		}
		
	}
	return 0;
}