#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string add(string num, string s);

int main(void)
{
	int n;
	cin  >> n;
	while (n--)
	{
		string num = "", s = "";
		while (cin >> s && s != "0")
		{
			num = add(num, s);
		}
		cout << num << "\n\n";
	}
	return 0;
}

string add(string num, string s)
{
	if (s.size() > num.size())
		s.swap(num);
		
	reverse(num.begin(), num.end());
	reverse(s.begin(), s.end());
	
	string sum = "";
	size_t num_len = num.size();
	size_t s_len = s.size();
	
	size_t i;
	char ch;
	bool carry = false;
	for (i = 0; i < s_len; ++i)
	{
		carry ? (ch = s[i] + num[i] - 47) : (ch = s[i] + num[i] - 48);
		if (ch > 57)
		{
			carry = true;
			ch = ch % 58 + 48;
			sum.append(1, ch);
		}
		else
		{
			carry = false;
			sum.append(1, ch);
		}	
	}

	for ( ; i < num_len; ++i)
	{
		carry ? (ch = num[i] + 1) : (ch = num[i]);
		if (ch > 57)
		{
			carry = true;
			ch = ch % 58 + 48;
			sum.append(1, ch);
		}
		else
		{
			carry = false;
			sum.append(1, ch);	
		}
	}	
	if (carry)
	{
		sum.append("1");
	}
	reverse(sum.begin(), sum.end());
	return sum;
}

