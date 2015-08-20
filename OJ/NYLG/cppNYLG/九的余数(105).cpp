///////////////////////////
超时版
#include <stdio.h>
#include <string.h>
#include <ctype.h>

using namespace std;

char str[1000011];

int main(void)
{
	int n;
	scanf("%d", &n);
	getchar();
	while (n--)
	{
	    gets(str);
	    int sum(0);
	    for (unsigned int i = 0; i < strlen(str); i++)
        {
            sum += str[i] - '0';
        }
        printf("%d\n", sum % 9);
	}
	return 0;
}
////////////////////////////
AC版
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int k,s;
    cin>>k;
    while(k--)
    {
        string a;
        int i,sum=0;
        cin>>a;
        for(i=0;i<a.size();i++)
        sum+=(a[i]-'0');
        s=sum%9;
        cout<<s<<endl;
    }
    return 0;
}


