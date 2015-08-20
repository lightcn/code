#include <stdio.h>
const int N = 21;
int a[N];  //快速填充数组的方法 
void compute()
{
	for (int i = 0; i < N; i++)
		a[i] = 1;
	for (int i = 1; i < N; i++)
	{
		for (int j = 1; j <= i; j+=2)
			a[i] *= j;
	}
}
int main(void)
{
	compute();
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int sum(0);
		int b;
		scanf("%d", &b);
		for(int i = 1; i <= b; i++)
			sum += a[i];
		printf("%d\n", sum);
	}
	return 0;
}