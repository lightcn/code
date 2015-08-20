// 1013, c99
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int n; ~scanf("%d", &n) && n != 0; )
	{
		int sum = 0;
		int *arr = (int*)malloc(sizeof(int) * n);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &arr[i]);
			sum += arr[i];
		} 
		printf("%d\n", sum);
		free(arr);
	}
	return 0;
} 