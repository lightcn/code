/**
 * ºÏ²¢(839).cpp
 *
 * Time : 2013-10-28 23:40
 *
 * Created with C-Free
 *
 * Copyright 2013 zhiliang
 */
 
 #include <cstdio>
#include <algorithm>
using namespace std;

int main(void)
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		int *arr = new int[n+n];
		int m = n + n;
		for (int i = 0; i < m; ++i)
			scanf("%d", &arr[i]);
		sort(arr, arr + m);
		for (int i = 0; i < m; ++i)
		{
			if (i == 0)
				printf("%d ", arr[i]);
			else if (arr[i] != arr[i-1])
				printf("%d ", arr[i]);
		}
		puts("");
		delete [] arr;
	}
}