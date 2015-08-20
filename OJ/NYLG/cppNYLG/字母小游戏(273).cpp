#include <stdio.h>
#include <string.h>
#include <ctype.h>

char a[1001];
int main(void)
{
	int n;
	scanf("%d", &n);
	getchar();
	while (n--)
	{
		gets(a);
		int cnt(0);
		for (int i = 0; i < strlen(a); i++)
		{
			if (islower(a[i]))
				++cnt;
		}
		if (cnt % 26 == 0)
		{
			putchar('z');
			putchar('\n');
		}
		else
		{
			putchar(cnt % 26 + 97 - 1);
			putchar('\n');
		}
	}	
	return 0;
}