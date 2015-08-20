/**
 * 最近点对	(615).cpp
 *
 * Time : 2013-8-12 22:44
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <cstdio>
#include <algorithm> 
using namespace std;

int main()
{	
	int m;
	while (~scanf("%d", &m))
	{
		int *arr = new int[m];
		
		for (int i = 0; i < m; ++i)
		{
			scanf("%d", &arr[i]);
		}	
		sort(arr, arr + m);
		int tag;
		int l, r;
		for (int i = 0; i < m - 1; ++i)
		{
			if (i == 0)
			{
				tag = arr[i+1] - arr[i];
				l = arr[i];
				r = arr[i+1];
			}
			else
			{
				if (arr[i+1] - arr[i] < tag)
				{
					l = arr[i];
					r = arr[i+1];
					tag = arr[i+1] - arr[i];
				}
			}
		} 
		
		printf("%d %d\n", l, r);
		delete [] arr;
	}
	return 0;
}
