//2013-6-28 12:57
#include <stdio.h>
int main(void)
{
	int a, b, c;
	while (scanf("%d%d%d", &a, &b, &c) != EOF)
	{
		if (a > b)
		{
			int temp = a;
			a = b;
			b = temp;
		}
		if (a > c)
		{
			int temp = a;
			a = c;
			c = temp;
		}
		if (b > c)
		{
			int temp = b;
			b = c;
			c = temp;
		}
		printf("%d %d %d\n", a, b, c);			
	}
	return 0;
} 