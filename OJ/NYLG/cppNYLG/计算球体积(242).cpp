/**
 * 计算球体积(242).cpp
 *
 * Time : 2013-8-10 18:19
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <cstdio>
#include <iostream>
using namespace std;

const double PI = 3.1415926;

int main(void)
{
	double R, V;
	while (cin >> R) // scanf ("%f", &R) 存在问题，输出老是为 “0” 
	{
		V = (4.0 * PI * R * R * R) / 3.0;
		printf("%.0f\n", V);
	}
	return 0;
}