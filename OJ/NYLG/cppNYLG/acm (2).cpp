#include <iostream>
#include <stack>
#include <cstdlib>

using namespace std;

int main()
{
	size_t t;
	
	
	for( ;t<5; )
	   cin>>t;
    double *num;
	num = new double[t];
	for(int i=0; i<t; i++)
	    num[i] == i;
	for(int j=0; j<t; j++)
	    cout<<num[j]<<' ';
	    
    delete [] num;
	cout<<endl;
	return 0;  
    
} 