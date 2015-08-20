#include <cstdio>

int main(void)
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int *a = new int[n];
		int sum(0);
		int cnt(0);
		for (int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		for (int i = 0; i < n; i++)
			sum += a[i];
		for (int i = 0; i < n; i++)
		{
			if ((sum-a[i]) % 2 == 0)
				cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}