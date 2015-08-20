/**
 * 题目1050：完数.cpp
 *
 * Time : 2013-8-27 8:19
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <stdio.h> 
  
int main(void)
{
	
	int n;
	while (~scanf("%d", &n))
	{
		int i;
		int flag = 1;
		
		for (i = 6; i <= n; ++i)
		{
			int sum = 0;
			int j;
			for (j = 1; j <= i/2; ++j)
			{
				if (i % j == 0)
				{
					sum += j;
					if (sum > i)
						break;
				}
			}
			if (flag && sum == i)
			{
				flag = 0;
			}
			else if (sum == i)
			{
				printf(" ");
			}			
			if (sum == i)
				printf("%d", i);
		}
		putchar('\n');
	}
	return 0;
}
