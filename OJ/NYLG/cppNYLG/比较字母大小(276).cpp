#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	getchar();
	while (t--)
	{
		char a, b;
		scanf("%c %c", &a, &b);
		getchar();
		if (a == b)
		{
			printf("%c=%c\n", a, b);	
		}
		else if (a > b)
		{
			printf("%c<%c\n", a, b);
		}
		else 
		{
			printf("%c>%c\n", a, b);
		}
	}
	return 0;
}