#include <vector>
#include <iostream>
#include <string>

int main(void)
{
	using namespace std;
	
	unsigned int n;
	while (cin >> n)
	{
		vector<string> vec;
		vector<string>::const_iterator i;
		string str;
		for (unsigned int j = 0; j < n; j++)
		{
			cin >> str;
			vec.push_back(str);
		}
		for(i = vec.begin(); i != vec.end(); ++i)
		{
			if ((*i) == "bowl")
			{
				cout << (*i) << ' ';
			}
			else if ((*i) == "knife")
			{
				cout << (*i) << ' ';
			}
			else if ((*i) == "fork")
			{
				cout << (*i) << ' '; 
			}
			else if ((*i) == "chopsticks")
			{
				cout << (*i) << ' ';
			}
		}
		cout << '\n';
		vec.clear();
	}
	return 0;
}