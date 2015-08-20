//Ê±¼ä£º2012-7-4  12£º55
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		char str1[41];
		char str2[41];
		scanf("%s%s", str1, str2);
		for (int i = strlen(str2) - 1; i >= 0; i--)
		{
			if (isalpha(str2[i]))
				putchar(str2[i]);
		}
		for (int i = strlen(str1) - 1; i >= 0; i--)
		{
			if (isalpha(str1[i]))
				putchar(str1[i]);
		}
		printf("\n");
		
	}
	return 0;
}