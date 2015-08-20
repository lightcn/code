#include <iostream>
#include <string> 
#include <cstddef>

using namespace std;

int main(void)
{
	size_t t;
	while (cin>>t)   //while (cin>>t && t > 0)
	{
		int n;
        int change_t;
        string *str;
        int *count;
        str = new string[t];
        count = new int[t];   
        for (size_t m = 0; m < t; ++m)   
            count[m] = 0;		 
        
        
		for (size_t j = 0; j < t; j++)
		{	
		   
		    cin>>n;
            cin>>change_t;
           
		    getline(cin, str[j]);        
        
		    if (change_t % 2 == 0)
            {
            	for (int k = 0; k < str[j].size(); ++k)
        	    {
        	    	if (str[j][k] == '1')
  	    	            ++count[k];
				} 
            }
            else
            {
            	for (int k = 0; k < str[j].size(); ++k)
        	        if (str[j][k] == '0')
        	            ++count[k];
            }           
		}
		for (size_t k = 0; k < t; ++k)
		    cout << "Case #" << k+1 << ":"<<' '<<count[k] << ".0000" <<endl;
		delete [] str;
		delete [] count;
	//	--t;	
	}
	return 0;
} 