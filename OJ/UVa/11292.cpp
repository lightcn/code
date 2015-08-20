/*
 *	author:	Light
 *	Email:	zhilight@gmail.com	
 *	Time:	2014-04-12
 *
 * */

#include <cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
	int n, m;
	while (scanf("%d%d", &n, &m) == 2 && (m != 0 || n != 0))
	{
		int *arr1 = new int[n];
		int *arr2 = new int[m];

		for (int i = 0; i < n; ++i)
			scanf("%d", &arr1[i]);
		for (int i = 0; i < m; ++i)
			scanf("%d", &arr2[i]);

		sort(arr1, arr1 + n);
		sort(arr2, arr2 + m);

		if (arr2[m-1] < arr1[n-1])
			printf("Loowater is doomed!\n");
		else
		{
			int sum(0);
			int cur(0);
			int j = 0;
			for (int i = 0; i < n; ++i)
			{
				for ( ; j < m; ++j)
				{
					if (arr2[j] > arr1[i])
					{
						++cur;
						sum += arr2[j];
						break;
					}
				}
			}
			if (cur < n)
				printf("Loowater is doomed!\n");
			else
				printf("%d\n", sum);
		}
		
		delete [] arr1;
		arr1 = NULL;
		delete [] arr2;
		arr2 = NULL;
	}
}
