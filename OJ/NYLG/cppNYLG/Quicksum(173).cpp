/**
 * Quicksum(173).cpp
 *
 * Time : 2013-8-10 22:47
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <cstdio>
#include <cstring>
char ch[303];
int main()
{
	while (gets(ch))
	{
		int sum(0);
		if (strlen(ch) == 1 && ch[0] == '#')
			break;
		for (int i = 0; i <= strlen(ch); ++i)
		{
			if (ch[i] >= 65 && ch[i] <= 90)
			{
				sum += (ch[i] - 64) * (i + 1);
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}