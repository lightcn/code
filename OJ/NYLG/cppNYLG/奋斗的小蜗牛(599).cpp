/**
 * ·Ü¶·µÄÐ¡ÎÏÅ£(599).cpp
 *
 * Time : 2013-8-15 17:12
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int h;
		scanf("%d", &h);
		if (h <= 10)
			printf("1\n");
		else if (h % 5 == 0) 
		{
			printf("%d\n", h / 5 - 1);
		}
		else 
		{
			printf("%d\n", h / 5);
		}
	}
	return 0;
}