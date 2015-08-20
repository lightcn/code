/**
 * 分数加减法(111).cpp
 *
 * Time : 2013-10-17 23:15 
 *
 * Created with Dev—CPP 
 *
 * Copyright 2013 zhiliang
 */
#include <cstdio>
#include <iostream>
using namespace std;

int gcd(int a, int b);
int lcm(int m, int n);
int main(int argc, char** argv) 
{
	int a, b, c, d;
	char f;
	char op;
	while (cin >> a >> f >> b >> op >> c >> f >> d)
	{
		if ('+' == op)
		{
			if (b == d)
			{
				if (0 == (a+c) % b)
					printf("%d\n", (a+c) / b); // 实验一下负数和正数的情况
				else
				{
					int m = gcd(a+c, b);
					printf("%d/%d\n", (a+c)/m, b/m);
				} 
			}
			else
			{
				int m = lcm(b, d);
				int ma = m / b;
				int mc = m / d;
				a = ma * a;
				c = mc * c;
				if (0 == (a+c) % m)
					printf("%d\n", (a+c)/m);
				else
				{
					int gys = gcd(a+c, m);
					printf("%d/%d\n", (a+c)/gys, m/gys);
				}
			}
		}
		else
		{
			if (b == d)
			{
				if (0 == (a-c) % b)
				{
					printf("%d\n", (a-c) / b);  // 实验一下负数和正数的情况
				}
					
				else
				{
					int m = gcd(a-c, b);
					printf("%d/%d\n", (a-c)/m, b/m);
				} 
			}
			else
			{
				int m = lcm(b, d);
				int ma = m / b;
				int mc = m / d;
				a = ma * a;
				c = mc * c;
				if (0 == (a-c) % m)
					printf("%d\n", (a-c)/m);
				else
				{
					bool flag = false;
					int gys = gcd(a-c, m);
					if (0 > gys)
					{
						gys *= -1;
						flag = true;
					}
					printf("%d/%d\n", (a-c)/gys, m/gys);
				}
			}
		}
		
	}
	return 0;
}

int gcd(int a, int b)
{
	  if (a < b)
	  {
	  	int tmp = a;
	  	a = b;
	  	b = tmp; // 2013-8-21 10:24更改
	 	}
    int x;
    while (1)
    {
        x = a % b;
        if (x == 0)
            return b;
        else
        {
            a = b;
            b = x;
        }
    }
}

int lcm(int m, int n)
{
		if (m < n)
	    {
	  		int tmp = m;
	  		m = n;
	  		n = tmp; // 2013-8-21 10:24更改
	 	}
    if (gcd(m, n) == 1)
        return m * n;
    else if (m % n == 0)
        return m;
    else
    {
        return (m * n) / gcd(m, n);
    }
}

