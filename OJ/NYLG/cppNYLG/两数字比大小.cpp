#include <iostream>
#include <string>
#include <cstddef>

using namespace std;

int main(void)

{
	string a;
	string b;
	while (cin >> a && cin >> b)
	{
		if (a[0] == 0 && b[0] == 0)
			return 0;
		if (a[0] == '-' && b[0] != '-')
			cout << "a<b" <<endl;
		else if(a[0] != '-' && b[0] =='-')
			cout << "a>b" <<endl;
		else if(a[0] == '-' && b[0] == '-')
		{
			if(a.length() > b.length())
				cout << "a<b"<<endl;
			else if(a.length() > b.length())
				cout << "a>b"<<endl;
			else if(a.length() == b.length())
			{
				for (size_t i = 1; i < a.length(); i++)
				{
					if (a[i] > b[i])
					{
						cout << "a<b" << endl;
							break;
					}
						
					else if (a[i] < b[i])
					{
						cout << "a>b" << endl;
							break; 
					}			
					if (a[i] == b[i])
					{
						for (i += 1; i < a.length(); i++)
						{
							if (a[i] > b[i])
							{
								cout << "a<b" << endl;
								break;
							}
						
							else if (a[i] < b[i])
							{
								cout << "a>b" << endl;
									break; 
							}
							else if (i == (a.length()-1))
							{
								cout << "a==b"<<endl;
								break;
							}								
						}
					}
							
				}
			}
		}
		else if(a[0] != '-' && b[0] != '-')
		{
			if(a.length() > b.length())
				cout << "a>b"<<endl;
			else if(a.length() > b.length())
				cout << "a<b"<<endl;
			else if(a.length() == b.length())
			{
				for (size_t i = 1; i < a.length(); i++)
				{
						if (a[i] == b[i])
						{
							for (i += 1; i < a.length(); i++)
							{
								if (a[i] > b[i])
								{
									cout << "a>b" << endl;
									break;
								}
						
								else if (a[i] < b[i])
								{
									cout << "a<b" << endl;
									break; 
								}
								else if (i == (a.length()-1))
								{
									cout << "a==b"<<endl;
									break;
								}								
							}
						}
				    else if (a[i] > b[i])
					{
						cout << "a>b" << endl;
							break;
					}
						
					else
					{
						cout << "a<b" << endl;
							break; 
					}
						
				}
			}
		}
			
	}
	return 0;
} 