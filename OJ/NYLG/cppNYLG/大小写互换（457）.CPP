//Ê±¼ä£º2012-7-2  13£º01
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
		for (int i = 0; i < strlen(str); i++)
		{
			if (islower(str[i]))
				str[i] = toupper(str[i]);
			else
				str[i] = tolower(str[i]);
		}
		puts(str);
	}
	return 0;
}