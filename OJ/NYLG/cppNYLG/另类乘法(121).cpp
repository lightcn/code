/**
 * ¡Ì¿‡≥À∑®(121).cpp
 *
 * Time : 2013-8-26 10:34
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
 #include <cstdio>

int main(void)
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int a, b;
		int arr1[10];
		int arr2[10];
		scanf("%d%d", &a, &b);

		int i = 0;
		int x = a;
		do
		{
			arr1[i] = x % 10;
			x /= 10;
			++i;
		}while (x != 0);
		
		int j = 0;
		x = b;
		do
		{
			arr2[j] = x % 10;
			x /= 10;
			++j;
		}while (x != 0);
		int sum = 0;
		for (int k = 0; k < i; ++k)
		{
			for (int l = 0; l < j; ++l)
			{
				sum += (arr1[k] * arr2[l]);
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}