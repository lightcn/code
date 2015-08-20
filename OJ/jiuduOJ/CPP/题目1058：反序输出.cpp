/**
 * 题目1058：反序输出.cpp
 *
 * Time : 2013-8-5 12:58
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <stdio.h>

int main()
{
	char ch[5];
    while (scanf("%s", ch) != EOF) // 输入引用的一定是地址 
    {   
    	 for (int i = 3; i >= 0; --i)
    	 {
    	 	putchar(ch[i]);
    	 }
    	 putchar('\n');
    }

    return 0;
}