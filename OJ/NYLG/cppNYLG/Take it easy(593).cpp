#include <iostream>

using namespace std;

int main(void)
{
	int n;
	while (cin >> n)
	{
		int a[10];
		int count(0);
		for (int i = 0; i < 10; i++)
			cin >> a[i];
		for(int j = 0; j < 10; j++)
		{	
			n = n + a[j];
			if (n >= 0)
			{
				count++;		
			}
			else
				break;
		}
		cout << count << '\n';
	}
	return 0;
}