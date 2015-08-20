/**
 * FibonacciÊý(13).cpp
 *
 * Time : 2013-8-6 11:08
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <stdio.h>

int fibon(int n);

int main()
{
	int m;
	scanf("%d", &m);
    while (m--) 
    {   
    	int n;
    	scanf("%d", &n);
		printf("%d\n", fibon(n));    	
    }
    return 0;
}
int fibon(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return fibon(n-1) + fibon(n-2);
	}
}
