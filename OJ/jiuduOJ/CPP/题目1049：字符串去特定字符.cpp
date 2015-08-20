/**
 * 题目1049：字符串去特定字符.cpp
 *
 * Time : 2013-8-5 11:23
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char s[10000];

int main()
{
    while (scanf("%s", s) != EOF)
    {   
    	 getchar();
    	 char ch;
    	 ch = getchar();
    	 //scanf("%c", &ch);
    	 for (int i = 0; i < strlen(s); ++i)
    	 {
    	 	if (s[i] != ch)
    	 		putchar(s[i]);
    	 }
    	 putchar('\n');
    }

    return 0;
}
