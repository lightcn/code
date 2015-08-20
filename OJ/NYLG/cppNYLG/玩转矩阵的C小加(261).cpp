/**
 * 玩转矩阵的C小加(261).cpp
 *
 * Time : 2013-8-10 17:49
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <cstdio>

int main(void)
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int a[3][3];
		for (int i = 0; i < 3; ++i)
			for (int j = 0; j < 3; ++j)
			{
				scanf("%d", &a[i][j]);
			}
	
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				printf("%d ", a[j][i]);
			}
			putchar('\n');
		}
			
	}
}