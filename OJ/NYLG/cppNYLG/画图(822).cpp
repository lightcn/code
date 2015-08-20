/**
 * »­Í¼(822).cpp
 *
 * Time : 2013-10-15 22:36
 *
 * Created with Dev¡ªCPP 
 *
 * Copyright 2013 zhiliang
 */
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
int main(int argc, char** argv) 
{
	int n;
	while (~scanf("%d", &n))
	{
		for (int i = 0; i < n; ++i)
			cout << string(n, '*') << endl;
	}
	return 0;
}