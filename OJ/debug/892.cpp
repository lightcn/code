//题目892 南阳理工 
#include <cstdio>

int main(void)
{
	int t;
	scanf("%d", &t);
	int a[7][7];
	while (t--)
	{
		for (int i = 0; i < 7; ++i)
			for (int j = 0; j < 7; ++j)
				scanf("%d", &a[i][j]);
		int count = 0;
		for (int i = 1; i <= 6; ++i)
			for (int j = 1; j <= 6; ++j)
			{
				if (a[i-1][j-1] == 1 && a[i+1][j+1] == 1 && a[i+1][j-1] == 1 && a[i-1][j+1] == 1)
					++count;
			}
		printf("%d\n", count);
	}	
} 