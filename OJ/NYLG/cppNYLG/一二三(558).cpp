/**
 * Ò»¶þÈý(558).cpp
 *
 * Time : 2013-8-15 17:27
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
		if (strlen(ch) > 3)
		{
			printf("3\n");
		}
		else
		{
			if (ch[0] == 't' && ch[1] == 'w')
				printf("2\n");
			else if (ch[0] == 't' && ch[2] == 'o')
				printf("2\n");
			else if (ch[1] == 'w' && ch[2] == 'o')
				printf("2\n");
			else 
				printf("1\n");
		}		
	}
	return 0;
}