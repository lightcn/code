/**
 * n-1Î»Êý(96).cpp
 *
 * Time : 2013-8-15 17:39
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	getchar();
	while (t--)
	{
		char ch[10];
		gets(ch);
		int i;
		for (i = 1; i < strlen(ch); ++i)
		{
			if (i == (strlen(ch) - 1))
				putchar(ch[i]);
			else if (ch[i] != '0')
			{
				putchar(ch[i]);
				++i;
				break;
			}
		}
		for ( ; i < strlen(ch); ++i)
			putchar(ch[i]);
		putchar('\n');			
	}
	return 0;
}