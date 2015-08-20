#include <iostream>
using namespace std;
	
int main()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	int t;
	cin>>t;
	while (t--)
	{
		int a[10];
		int b[10];
		
		double num = 10;
		double count = 0;
		double ties = 0;
		
		for (int i = 0; i < 10; ++i)
     		cin>>a[i];
		for (int j = 0; j < 10; ++j)
			cin>>b[j];
		for (int k = 0; k < 10; ++k)
		
		{	
            if (a[k] > b[k])
            	count++;
           	else if (a[k] == b[k])
			    ties++;
		}
		
		cout<<(count/(num - ties))*100<<endl;
	}
	return 0;
} 