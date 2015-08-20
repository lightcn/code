#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int u)
{
	if (u == 0 || u == 1)
		return false;
	if (u == 2)
		return true;
	for (int i = 3; i <= sqrt(u); i += 2)
		if (u%i==0)
			return false;
		else 
			return true;
}

int main(void)
{
	int t;
	while(t--)
	{
		int n;
		int *num;
		cin >> n;
		int sum = 0;
		num = new int[n];
		for (int i = 0; i < n; i++)
			cin >> num[i];
		for (int j = 0; j < n; j++)
			if (is_prime(num[i]))
				sum += num[i];
		delete [] num;
	}
	return 0;
}