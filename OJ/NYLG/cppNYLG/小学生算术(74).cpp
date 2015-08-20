#include <iostream>

using std::cin;
using std::cout;

int main(void)
{
	int m, n;
	while (cin >> m >> n)
	{
		if (m == 0 && n == 0)
			return 0;
		int count(0);
		if ((m % 10 + n % 10) > 9)
			count++;
			
		if((m % 10 + n % 10) > 9 )
		{
			if ((m / 10 % 10) +(n / 10 % 10) + 1 > 9)
				count++;
		}
		else if ((m / 10 % 10) +(n / 10 % 10) > 9)
		{
			count++;
		}
		
		if ((m / 10 % 10) +(n / 10 % 10) + 1 > 9)
		{
			if (m / 100 + n / 100 + 1 > 9)
				count++;
		}
		else if (m / 100 + n / 100 > 9)
		{
			count++;
		}
		
		cout << count << '\n';
	}
	return 0;
}