/**
 * Created with C-Free.
 * User: zhiliang
 * Date: 13-7-15
 * Time:      22:48
 */
#include <cstdio>
int main(void)
{
	int m;
	while (scanf("%d", &m) != EOF)
	{
		int *a = new int[m];
		bool flag = true;
		for (int i = 0; i < m; i++)
		{
			scanf("%d", &a[i]);
		}
		printf("YES\n");
		delete [] a;					
	}
}