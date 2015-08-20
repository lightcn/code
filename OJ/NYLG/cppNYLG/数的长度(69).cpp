/**
 * 数的长度(69).cpp
 *
 * Time : 2013-8-6 11:48
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include<iostream>
#include<cmath>
using namespace std;

const double pi=acos(-1);
const double e=exp(1);
int main()
{	
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		cout<<(int)(log10(sqrt(2*pi*a))+a*log10(a/e))+1<<endl; 
	}
	return 0;
}