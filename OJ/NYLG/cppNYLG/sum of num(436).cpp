#include <iostream>

using namespace std;

int main(void)
{
	int n;
	while (cin >> n)
	{
		int sum(0);
		if (n > 0)
		{
			sum+=n*(n+1)/2;
		}
		else
		{
			n = -n;
			
			sum+=n*(n+1)/2;
			sum = -(sum-1);
		}
		
		cout << sum << endl;  
	}
	return 0;
} 