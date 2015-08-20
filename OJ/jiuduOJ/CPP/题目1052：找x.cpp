/**
 * Ã‚ƒø1052£∫’“x.cpp
 *
 * Time : 2013-8-27 10:04
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <stdio.h> 
#include <stdlib.h>
int middle(int array[],int size,int num); 
int comp(const void *a, const void *b);
int main(void)
{
	
	int n;
	while (~scanf("%d", &n))
	{
		int *arr;
		arr = (int *)calloc(n, sizeof(int));
		int i;
		for (i = 0; i < n; ++i)
		{
			scanf("%d", &arr[i]);
		}
		int x;
		scanf("%d", &x);
		int flag = 0;
		for (i = 0; i < n; ++i)
		{
			if (arr[i] == x)
			{
				printf("%d\n", i);
				flag = 1;
			}				
		} 
		if (!flag)
		{
			printf("-1\n");
		}
		free(arr);
	}
	return 0;
}