/**
 * 题目1506：求1+2+3+...+n.cpp
 *
 * Time : 2013-8-5 11:48
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <stdio.h>

int main()
{
	int n;
    while (~scanf("%d", &n)) // 输入引用的一定是地址 
    {   
    	 printf("%d\n", (1 + n) * n /2); 
    }

    return 0;
}
