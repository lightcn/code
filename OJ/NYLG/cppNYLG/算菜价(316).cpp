/**
 * À„≤Àº€(316).cpp
 *
 * Time : 2013-8-26 12:04 
 *
 * Created with DEVCPP
 *
 * Copyright 2013 zhiliang <zhiliang@ubuntu>
 */
#include <cstdio>

int main()
{
	char ch[30];
    double a, b;
    double sum = 0;
    while (~scanf("%s%lf%lf", ch, &a, &b))
    {
    	sum += a * b;
    }
    printf("%.1lf\n", sum);
    return 0;
}