#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int t;
	cin >> t;
	
	while (t--)
	{
		char *str;
		str = new char[4];
		cin >> str;
		sort(str, str+3);
		for (int i = 0; i < 3; i++)
			cout << str[i] << ' ';
		cout << endl;
	}
	return 0;
} 