#include <iostream>  
#include <vector>  
using namespace std;  
  
int main(void)  
{  
  	int nLineNum = 0;  
	cin>>nLineNum;  
  	if(nLineNum<0 || nLineNum>100)  
  	{  
 		cout<<"Please input number 0<n<=100."<<endl;  
    	return 1;  
  	}  
    
  	vector<string> vInputList;  
  	for(int i=0; i<nLineNum; ++i)  
  	{  
    	string sInputStr="";  
    	cin>>sInputStr;  
      
    	if(sInputStr.size() == 0)  
    	{  
     	 	cout<<"Error:Input string is empty."<<endl;  
      		--i;  
      		continue;  
    	}  
      
    	if(sInputStr.size() >=10000)  
    	{  
   		 	cout<<"Error:Input string is too long."<<endl;  
      		--i;  
      		continue;  
    	}  
      
    	vInputList.push_back(sInputStr);  
  	}  
    
  	vector<string>::iterator vIter = vInputList.begin();  
  	for(; vIter != vInputList.end(); ++vIter)  
  	{  
    	string sUnMatch="";  
    	string sInput=*vIter;  
    	string::iterator sIter = sInput.begin();  
    	for(; sIter != sInput.end(); ++sIter)  
    	{  
  		 	char cCurChar = *sIter;  
      		if(sUnMatch.empty())  
      		{  
        		sUnMatch.push_back(cCurChar);  
      		}  
   		 	else  
      		{  
        		string::iterator sEndIter = sUnMatch.end() - 1;  
        		char cEndChar=*sEndIter;  
        		if((cEndChar=='[' && cCurChar==']')  
         			 ||(cEndChar=='(' && cCurChar==')'))  
        		{  
          			sUnMatch.erase(sEndIter);  
        		}  
        		else  
        		{  
          			sUnMatch.push_back(cCurChar);  
        		}  
      		}  
   		}  
      
    	if(sUnMatch.empty())  
    	{  
      		cout<<"Yes"<<endl;  
    	}  
    	else  
    	{  
      		cout<<"No"<<endl;  
    	}  
	}  
  
  return 0;  
}  