#include <iostream>

using namespace std;

int main(void)
{
	int n;
	while (cin >> n)
	{
		if (n == 0)
			return 0;
		int *a;
		int *b;
		a = new int[n];
		b = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i] >> b[i];
		}
		for (int i = 0; i < n; i++)
		{
			a[i] = a[i] + b[i];
			//if (a[i+1] > )
		}
		for (int i = 0; i < n-1; i++)
		{
			if (a[i+1] < a[i])
			{
				int temp;
				temp = a[i+1];
				a[i+1] = a[i];
				a[i] = temp;
			}
		}
		cout << a[n-1] << '\n';
		delete [] a;
		delete [] b;
	} 
	return 0;
}