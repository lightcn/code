/**
 * Fibonacci Again!(480).cpp
 *
 * Time : 2013-8-23 19:30
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
 
#include <cstdio>
#include <cmath>
int fb(int n);
bool is_prime(int x);
int main()
{
	int m;
//	printf("************1\n");
	while(~scanf("%d", &m) && m != -1)
	{
//		printf("************2\n");
		if (is_prime(fb(m)))
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
int fb(int n)
{
//	printf("************fbcall\n");
	if (n == 1)
		return 3;
	else if (n == 2)
		return 7;
	else 
		return fb(n-1) + fb(n-2);
}
bool is_prime(int x)
{
//	printf("************is_primecall\n");
	if (x == 2 || x== 3 || x== 5 || x== 7 || x== 11)
		return true;
	else
	{
		if (x%2==0 || x%3==0 || x%5==0 || x%7==0 || x%11==0)
			return false;
		bool flag = false;
		for (int i = 11; i <= sqrt(x); ++i)
		{
			
			if (x % i == 0)
			{
				flag = true;
				break;	
			}
		}
		if (flag)
			return false;
		else
			return true;
	}
}