/**
 * 题目1048：判断三角形类型.cpp
 *
 * Time : 2013-8-5 11:12
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <iostream>

using namespace std;

double myacos(double x, double y, double z);
 
int main()
{
    double a, b, c; 
    while (cin >> a >> b >> c)
    {   
    	if (myacos(a, b, c) == 0 || myacos(b, a, c) == 0 || myacos(c, b, a) == 0)
    		cout << "直角三角形\n";
    	else if (myacos(a, b, c) < 0 || myacos(b, a, c) < 0 || myacos(c, b, a) < 0)
    		cout << "钝角三角形\n";
		else 
			cout << "锐角三角形\n"; 
    }

    return 0;
}

double myacos(double x, double y, double z)
{
	return (y*y + z*z - x*x) / (y*z*2);
}
