/**
 * ÒÆÎ»ÃÜÂë.cpp
 *
 * Time : 2013-10-1 22:30
 *
 * Created with Dev¡ªCPP 
 *
 * Copyright 2013 zhiliang
 */
#include <cstdio>
#include <cstring>
int main(void)
{
	char ch[51];
	int k;
	while (~scanf("%s %d", ch, &k))
	{
		int l = strlen(ch);
		for (int i = 0; i < l; ++i)
		{
			int temp = ch[i] - 65;
			if ((temp - k) < 0)
				ch[i] = temp - k + 65 + 26;
			else
					ch[i] = temp - k + 65;
		}
		puts(ch);
	}
} 