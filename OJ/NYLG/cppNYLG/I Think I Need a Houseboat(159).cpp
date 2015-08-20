/**
 * I Think I Need a Houseboat(159).cpp
 *
 * Time : 2013-8-10 21:44 
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <cstdio>

const double PI = 3.1415926;

int main()
{
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; ++i)
	{
		double x, y;
		scanf ("%lf %lf", &x, &y);
		double area =PI * (x*x + y*y);
		double s = area / 100;
		int year = (int)(s+1);
		printf("Property %d: This property will begin eroding in year %d.\n", i, year);
	}
	printf("END OF OUTPUT.\n");
	return 0;
}
