/**
 * 题目1021：统计字符.cpp
 *
 * Time : 2013-9-30 22:42
 *
 * Created with C-free 
 *
 * Copyright 2013 zhiliang
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main()
{
	vector<string> ch, str;
	while (1)
	{
		string _ch, _str;
		getline(cin, _ch);
		if (_ch == "#")
			break; 
		ch.push_back(_ch);

		getline(cin, _str);
		str.push_back(_str);
	}
	
	vector<string>::iterator it = ch.begin();
	vector<string>::iterator is = str.begin(); 
	for ( ; it != ch.end() && is != str.end(); ++it, ++is)
	{
		int ch_len, str_len;
		ch_len = (*it).length();
		str_len = (*is).length();
		for (int j = 0; j < ch_len; ++j)
		{
			int cnt = 0;
			for (int k = 0; k < str_len; ++k)
			{
				if ((*it).at(j) == (*is).at(k))
					++cnt;
			}
			cout << (*it).at(j) << ' ' << cnt << '\n';
		}
	}
}
