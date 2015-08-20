/**
 * 题目1047：素数判定.cpp
 *
 * Time : 2013-8-5 10：44
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <iostream>
#include <cmath> 

using namespace std;

bool is_prime(int n);
 
int main()
{
    int cur;
    while (cin >> cur)
    {   
    	if (is_prime(cur))
    		cout << "yes\n";
    	else
    		cout << "no\n";
    }

    return 0;
}
bool is_prime(int n)
{
	if (n <= 1)
		return false;
	else
	{
		if (n == 2 || n == 3 || n == 5 || n == 7)
			return true;
		if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
			return false;
		else
		{
			if (n == 11)
				return true;
			bool flag = true;
			for (int i = 2; i <= sqrt(n); ++i)
			{
				if (n % i == 0)
				{
					flag = false;
					return false;
				}								
			}
			if (flag)
				return true;	
		}
	}
}