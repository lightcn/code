//2013-7-2 23:46
#include <cstdio>
#include <cmath>
#include <cstring>

const int M = 1100;
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
		int a;
		scanf("%d", &a);
		int _a, a_;
		if (mark[a]) 
		{
			printf("%d\n", a);
		}
		else
		{
			_a = a;
			while (!mark[_a])
			{
				_a++;
			}
			a_ = a;
			while (!mark[a_])
			{
				a_--;	
			}
			if ((_a - a) <= (a - a_))
			{
				printf("%d\n", _a);	
			}
			else
			{
				printf("%d\n", a_);
			}
			
		}
	}
	return 0;
} 
