/**
 * ÌâÄ¿1067£ºnµÄ½×³Ë.cpp
 *
 * Time : 2013-8-27 8:19
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <cstdio> 
#include <cstring> 
int max[3000]; 
int main(void)
{
	
	int n;
	while (~scanf("%d", &n))
	{
		memset(max, 0, sizeof(max));
		max[0] = 1;
		for (int i = 2; i <= n; ++i)
		{
			int c = 0;
			for (int j = 0; j < 3000; ++j)
			{
				int s = max[j] * i + c;
				max[j] = s % 10;
				c = s / 10;
			}
		} 
		int j = 2999;
		for ( ; j >= 0; --j)
		{
			if (max[j])
				break;
		}
		for (int i = j; i >= 0; --i)
		{
			printf("%d", max[i]);
		}
		putchar('\n');
	}
	return 0;
}
