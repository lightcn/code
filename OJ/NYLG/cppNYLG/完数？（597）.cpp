 // 2013-6-28 23.05 
#include <stdio.h>
int main(void)
{
	int n;
	while (scanf("%d", &n) && n!=-1)
	{
		
		int sum(0);
		for (int i = 1; i <= (n/2); i++)
		{
			if (n % i == 0)
 				sum += i;
		}
		if (sum == n)
		{
			printf("%d=1", n);
			for(int i = 2; i <= (n/2); i++)
			{
				if (n%i == 0) //运行一直不通过就是因为这一步 
					printf("+%d", i);
			}
			printf("\n");								
		}
		else
			printf("No\n");
	}
	return 0;
}        