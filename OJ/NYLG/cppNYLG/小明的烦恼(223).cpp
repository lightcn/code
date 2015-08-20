#include <iostream>
#include <string>
using namespace std; 

int main(void)
{
	int t;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == 'a' || str[i] == 'b' || str[i] == 'c')
				cout << '2';
			else if (str[i] == 'd' || str[i] == 'e' || str[i] == 'f')
				cout << '3';
			else if (str[i] == 'g' || str[i] == 'h' || str[i] == 'i')
				cout << '4';
			else if (str[i] == 'j' || str[i] == 'k' || str[i] == 'l')
				cout << '5';
			else if (str[i] == 'm' || str[i] == 'n' || str[i] == 'o')
				cout << '6';
			else if (str[i] == 'p' || str[i] == 'q' || str[i] == 'r' || str[i] == 's')
				cout << '7';
			else if (str[i] == 't' || str[i] == 'u' || str[i] == 'v')
				cout << '8';
			else
				cout << '9';	
		}
		cout << endl;
	}
	return 0;
} 