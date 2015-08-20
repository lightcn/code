/**
 * 最小K个数之和(678).cpp
 *
 * Time : 2013-8-20 20:03
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <cstdio>
#include <algorithm>
using namespace std;
int main(void)
{
	int n, m;
	while (~scanf("%d%d", &n, &m))
	{
		int *arr = new int[n];
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &arr[i]);
		}
		sort(arr, arr + n);
		int sum = 0;
		for (int i = 0; i < m; ++i)
		{
			sum += arr[i];
		}
		printf("%d\n", sum);
	}
	return 0;
}
