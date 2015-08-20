#include <iostream>

using std::cin;
using std::cout;

int main(void)
{
	int n;
	
	while (cin >> n)
	{
		if (n == 0)
			return 0;
		int gw = n%10;
		int sw = n/10%10;
		int bw = n/100;
		int sxhs = gw*gw*gw + sw*sw*sw + bw*bw*bw;
		if (sxhs == n)
			cout << "Yes" << '\n';
		else
			cout << "No" <<'\n'; 
	}
	return 0;
} 