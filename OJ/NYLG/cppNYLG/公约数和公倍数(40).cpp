/**
 * 公约数和公倍数(40).cpp
 * Created with Qt Creator.
 * User: zhiliang
 * Date: 13-8-5
 * Time:     23:01
 */

#include <iostream>

using namespace std;

int gcd(int a, int b);
int lcm(int m, int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        if (m  < n)
        {
            int tmp = m;
            m = n;
            n = tmp;
        }
        cout << gcd(m, n) << ' ' << lcm(m, n) << endl;
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

