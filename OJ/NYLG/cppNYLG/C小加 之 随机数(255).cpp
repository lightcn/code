/**
 * C小加 之 随机数(255).cpp
 *
 * Time : 2013-8-10 20：48 
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int *num = new int[n];
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &num[i]);
		}
		sort(num, num + n);
		
		int *nnum = new int[n];
	//	memset(nnum, 0, sizeof(nnum));    // memeset 应该如何使用？ 
		for (int i = 0; i < n; ++i)
		{
			nnum[i] = 0;
		}
		
		int j = 0;
		for (int i = 0; i < n; ++i)
		{
			if (i == 0)
			{
				nnum[j] = num[i];
				++j;
			}
			else if (num[i] != num[i-1])
			{
				nnum[j] = num[i];
				++j;
			}
		}
		int cnt(0);
		for (int i = 0; i < n; ++i)
		{
			if (nnum[i])
				++cnt;
		}
		printf("%d\n", cnt);
		
		for (int i = 0; i < cnt; ++i)
		{
			printf("%d ", nnum[i]);
		}
		putchar('\n');
		
		delete [] num;
		delete [] nnum;
	}
	return 0;
}