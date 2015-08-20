/**
 * ��Ŀ1048���ж�����������.cpp
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
    		cout << "ֱ��������\n";
    	else if (myacos(a, b, c) < 0 || myacos(b, a, c) < 0 || myacos(c, b, a) < 0)
    		cout << "�۽�������\n";
		else 
			cout << "���������\n"; 
    }

    return 0;
}

double myacos(double x, double y, double z)
{
	return (y*y + z*z - x*x) / (y*z*2);
}
