//题目268
//第一次未通过原因，用cstring 的 cin.getline（）里有某些未知的特性，导致多空了一行 

#include <iostream>
#include <string>

using namespace std;

int main()
{

	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		string  a;
		cin >> a;
		for (int j = 0; j < a.length(); j++)
			if (a[j] == 'R')
				cout << a[j];
		for (int k = 0; k < a.length(); k++)
			if (a[k] == 'W')
				cout << a[k];
		for (int l = 0; l < a.length(); l++)
			if (a[l] == 'B')
				cout << a[l];
		cout << endl;
	}
	return 0;
}