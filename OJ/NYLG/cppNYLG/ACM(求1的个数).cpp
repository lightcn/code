#include <iostream>
#include <cstddef>
using namespace std;

int main(void)
{
	size_t n;
	int *num;
    int *count;
	
	while (cin>>n)
	{
		
		num = new int[n];
		count = new int[n];
		for (size_t x=0; x<n; ++x)
		{
			num[x]=0;
		}
		for (size_t k=0; k<n; ++k)
		{
			count[k]=0;
		}
		for (size_t i=0; i<n; ++i)
		{
			cin>>num[i];
		}
		
		for (size_t j=0; j<n; ++j)
		{
			 do
	         {
		         int a=num[j]%2;
		         if (a == 1)
		             count[j]++;
		             num[j]=(num[j]-a)/2;
	         }while (num[j]!=0);
		}
		for (size_t t=0; t<n; ++t)
		{
			cout<<count[t]<<'\n';
		}
		delete [] num;
		delete [] count;
	}
	return 0;
} 