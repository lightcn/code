//关于整形数的进位计算
#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<char> s;
    int n,a,m;
    cout<<"输入一个数";
    cin>>n;
    cout<<"输入要转化的进制";
    cin>>m;
    cout<<n<<"=";
    if(m<n)
    {
        while(n)
        {
            a=n%m;
            n/=m;
            if(a>9)
            a=65+a-10-48;// 凑成英文字母的ASC值
            s.push(a+48);//加上48后变成ASC的数字
        }
    }
    else
    { 
        while(n)
        {
            a=n%m;
            n/=m;
            if(a>9)
            a=65+a-10-48;// 凑成英文字母的ASC值
            s.push(a+48);//加上48后变成ASC的数字
        }
        s.push(48);//多输入一个0即可
    }
    while(!s.empty())
    {
	    cout<<s.top();
        s.pop();
    }
    cout<<endl;
    return 0; 
}