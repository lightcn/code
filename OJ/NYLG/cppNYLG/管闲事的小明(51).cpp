/**
 * 管闲事的小明(51).cpp
 *
 * Time : 2013-8-19 17:55
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
 #include <cstdio>

int main(void)
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int l, m;
		scanf("%d%d", &l, &m);
		bool *x = new bool[l+1];
		for (int i = 0; i <=l; ++i)
			x[i] = true;
		for (int i = 0; i < m; ++i)
		{
			int a, b;
			scanf("%d%d", &a, &b);
			for (int j = a; j <= b; ++j)
			{
				if (x[j])
					x[j] = false;
			}
		}
		int sum = 0;
		for (int i = 0; i <= l; ++i)
		{
			if (x[i])
				++sum;
		}
		printf("%d\n", sum);
		delete [] x;
	}
}