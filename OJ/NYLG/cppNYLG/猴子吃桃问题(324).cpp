#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		int sum(1);
		for (int i = n; i > 0; i--)
		{
			sum = (sum + 1)*2;
		}
		printf("%d\n", sum);
	}
	return 0;
} 