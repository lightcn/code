/**
 * a letter and a number(217).cpp
 *
 * Time : 2013-8-10 18:45
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <iostream>
using namespace std;

int main()
{	
	int t;
	cin >> t;
	while (t--)
	{
		char a;
	    int x;
	    cin >> a >> x;
		if (a >= 97)
		{
			cout << (a - 96) * (-1) + x << endl;
		}
		else
		{
			cout << a - 64 + x << endl;
		}
	}
	return 0;
}