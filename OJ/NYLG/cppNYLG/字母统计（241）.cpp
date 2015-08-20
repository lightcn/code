/**
 * ×ÖÄ¸Í³¼Æ£¨241£©.cpp
 *
 * Time : 2013-10-6 13:05
 *
 * Created with Dev¡ªCPP 
 *
 * Copyright 2013 zhiliang
 */
#include <cstdio>
#include <cstring>
using namespace std;
char ch[1012];

int main(int argc, char** argv) 
{
	int t, s[26];
	scanf("%d", &t);
	getchar();
	while (t--)
	{
		memset(s, 0, sizeof(s));
		gets(ch);
		int ch_l = strlen(ch);
		int max = 0;
		int ans;
		for (int i = 0; i < ch_l; ++i)
		{
			s[ch[i] - 'a']++;
		}
		for (int i = 0; i < 26; ++i)
		{
			if (s[i] > max)
			{
				max = s[i];
				ans = i;
			}
		}
		printf("%c\n", 'a' +  ans);
	}
	return 0;
}