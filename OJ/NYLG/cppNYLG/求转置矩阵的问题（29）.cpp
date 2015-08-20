#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	while (n--)
	{
		int a[9];
		for (int i = 0; i < 9; i++)
			cin >> a[i];
		cout << a[0] << ' ' << a[3] << ' ' << a[6] << endl;
		cout << a[1] << ' ' << a[4] << ' ' << a[7] << endl;
		cout <<a[2]  << ' ' << a[5] << ' ' << a[8] << endl; 
	}
	return 0;
} 
