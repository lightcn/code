/**
 * ��Ŀ1506����1+2+3+...+n.cpp
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
    while (~scanf("%d", &n)) // �������õ�һ���ǵ�ַ 
    {   
    	 printf("%d\n", (1 + n) * n /2); 
    }

    return 0;
}
