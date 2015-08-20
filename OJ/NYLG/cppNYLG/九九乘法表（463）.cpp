// 6月 27 日 14：10 
#include <stdio.h>
int main(void)
{
	int m;
	scanf("%d", &m); //输入一定要加 “&”，不然会出现异常 
	for (int i = 0; i < m; i++)
	{
		int n;
		scanf("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			for (int j = i; j <= 9; j++)
			{
				printf("%d*%d=", i, j);
				printf("%d ", i*j);				
			}
			printf("\n");
		}
	}
	return 0;
}