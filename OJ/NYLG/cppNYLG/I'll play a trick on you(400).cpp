/**
 * I'll play a trick on you(400).cpp
 *
 * Time : 2013-8-12 10:06
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <cstdio>
#include <cstring>

char str[110];
char ch[110]; 
 
int main()
{
	int n; 
	scanf("%d", &n);
	getchar();
	while (n--)
	{		
		scanf("%s%s", str, ch);
		int sum = 0;
		for (int i = 0; i < strlen(str); ++i)
		{
			sum += (str[i] - '0');
		}
		
		for (int i = 0; i < strlen(ch); ++i)
		{
			sum += (ch[i] - '0');
		}
		printf("%d\n", sum);
	}
	return 0;
}
