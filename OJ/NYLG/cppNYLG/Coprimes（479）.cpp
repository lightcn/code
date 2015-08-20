#include <cstdio>

bool isgcd(int a, int b)
{
	int x;
	while (b != 0)
	{
		x = a % b;
		if (x != 0)
		{
			a = b;
			b = x;
		}
		else
		{
			if (b == 1)
				return true;
			else
				return false;
		}
	}
}
int main(void)
{
	int n;
	while (scanf("%d", &n) != EOF)	
	{
		int cnt(0);
		for (int i = 1; i < n; i++)
		{
			if (isgcd(n, i))
				cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}