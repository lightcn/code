#include <iostream>

using namespace std;

int main(void)
{
	int n;
	while (cin >> n)
	{
		int sum(0);
		for (int i = 0; i <= n; i += 2)
		{
			sum += i;
		}
		cout << sum << '\n';
	}
	return 0;
}