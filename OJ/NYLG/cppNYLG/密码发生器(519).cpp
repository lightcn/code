/**
 * ÃÜÂë·¢ÉúÆ÷(519).cpp
 *
 * Time : 2013-8-12 11:14
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <cstdio>
#include <cstring>

char ch[101];

int main()
{
	int n; 
	scanf("%d", &n);
	getchar();
	while (n--)
	{		
		gets(ch);
		int arr[6];
		for (int i = 0; i < 6; ++i)
		{
			arr[i] = 0;
		}
		for (int i = 0; i < 6; ++i)
		{
			for (int j = i; j < strlen(ch); j+=6)
			{
				arr[i] += ch[j];
			}
		}
		for (int i = 0; i < 6; ++i)
		{
			while (arr[i] > 9)
		    {
				int tmp = 0;
				do
				{					
					tmp += arr[i] % 10;
					arr[i] /= 10;
				} while (arr[i] != 0);
				arr[i] = tmp;
			}
		}
		for (int i = 0; i < 6; ++i)
			printf("%d", arr[i]);
		putchar('\n');
	}
	return 0;
}
