#include <cstdio>
#include <cmath>
#include <cstring>

//using std::cin;
//using std::cout;

const int M = 2000000;
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
	int n;
	seive_prime();
	while (scanf("%d", &n))
	{
		if (n == 0)
			return 0;
		for (int i = 2; i <= n; i++)
		{
			if (mark[i])
				printf("%d",i) << i << printf(" ");
		}
		printf("\n");
	}
	return 0;
}