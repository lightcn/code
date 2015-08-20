/**
 * 题目1206：字符串连接.cpp
 *
 * Time : 2013-10-26 22:27
 *
 * Created with C-free 
 *
 * Copyright 2013 zhiliang
 */
 
 #include <cstdio>

int main(void)
{
	char ch1[101];
	char ch2[102];
	while (~scanf("%s%s", ch1, ch2))
	{	
		char str[205];
		int it = 0;

		for (int i = 0; ch1[i] != '\0'; ++i, ++it)
		{
			str[it] = ch1[i];
		}

		for (int i = 0; ch2[i] != '\0'; ++i, ++it)
		{
			str[it] = ch2[i];
		}

		str[it] = '\0';
		puts(str);
	}
	return 0;
} 