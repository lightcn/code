#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
	int n;
	int count=0;
	while (cin>>n)
	{
		for (int i=0; i<n; ++i)
		{
			char a[100] = (char)i;
            for (int j=0; j<strlen(a); ++j)
            if (a[j] == '1')
            ++count;
		}
		    
	}
	return 0;
}