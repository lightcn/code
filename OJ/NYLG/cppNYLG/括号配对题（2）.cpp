#include <iostream>
#include <stack>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::stack;
using std::endl;


// char str[10001];
 

int main(void)
{

	string str;
	str.reserve(10001);
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		stack<char> s;
		cin >> str;
		
		if (str[0] == ')' || str[0] == ']')
		{
			cout << "No" << endl;
		}
		else
		{
			for (int j = 0; j < str.length(); j++)
			{
				if (str[j] == '(' || str[j] == '[')
					s.push(str[j]);
				else if (str[j] == ')' && s.top() == '(')
					s.pop();
				else if (str[j] == ']' && s.top() == '[')
					s.pop();
			}
			if (s.empty())
				cout << "Yes" << endl;
			else
				cout << "No" << endl;	
		}	
		
	}
	return 0;
} 