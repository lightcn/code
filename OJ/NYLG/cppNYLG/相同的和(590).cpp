/**
 * 相同的和(590).cpp
 *
 * Time : 2013-8-12 10:06
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <cstdio>
 
int main()
{
	int n, m; 
	while (~scanf("%d%d", &n, &m))
	{		
		int cnt = 0;
		int * arr = new int[n];
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &arr[i]);
		}
		
		for (int i = 0; i < n - 1; ++i)
		{
			int tmp = 0;
			for (int j = i; j < n; ++j)
			{
				tmp += arr[j];
				if (tmp == m)
					++cnt;
				else if (tmp > m)
					break;
			}
			
		}
		delete [] arr;
		printf("%d\n", cnt);
	}
	return 0;
}
