/**
 * ��Ŀ1063��������.cpp
 *
 * Time : 2013-8-5 13:11
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <stdio.h>

int main()
{
	int n;
    while (scanf("%d", &n) != EOF) // �������õ�һ���ǵ�ַ 
    {   
    	 if (n >= 0)
    	 {
    	 	printf("%d\n", (n + n*2) * (n+1) /2);
    	 }
    	 else
    	 {
    	 	printf("-%d\n", (n +(n*2))*(n-1) /2);
    	 }
    }

    return 0;
}