#include <string>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main(void)
{
	char ch[1010] = {'\0'};
	int n;
	cin >> n;
	getchar();
	while (n--)
	{
		gets(ch);
		int len = strlen(ch);
		string s("");
		for (int i = 0; i < len; ++i)
		{
			if (ch[i] != ' ')
			{
				s.append(1, ch[i]);
			}
			else
			{
				reverse(s.begin(), s.end());
				cout << s << " ";
				s = "";
			}
		}
		reverse(s.begin(), s.end());
		cout << s << endl;
	}
    return 0;
}

