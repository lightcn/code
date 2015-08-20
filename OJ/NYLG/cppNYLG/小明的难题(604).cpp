//ʱ�䣺2012-7-4  12:39
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		char str[101];
		scanf("%s", str);
		for (int i = 0; i < strlen(str); i+=2)
		{
			if (islower(str[i]))
				str[i] = toupper(str[i]);
		}
		puts(str);
	}
	return 0;
}