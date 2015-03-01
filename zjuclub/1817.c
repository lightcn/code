#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char a[16], b[16];
void trim(char *str);
int main(void)
{
	while (scanf("%s%s", a, b) != EOF)
	{
	    trim(a);
	    trim(b);
		int ia = atoi(a);
		int ib = atoi(b);
		printf("%d\n", ia + ib);
	}
	return 0;
}
void trim(char *str)
{
	int alen = strlen(str);
	int i, j;
	for (i = 0, j = 0; j < alen; ++j)
	{
		if (str[j] != ',')
			str[i++] = str[j];
	}
	str[i] = '\0';
}
