//�����������Ľ�λ����
#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<char> s;
    int n,a,m;
    cout<<"����һ����";
    cin>>n;
    cout<<"����Ҫת���Ľ���";
    cin>>m;
    cout<<n<<"=";
    if(m<n)
    {
        while(n)
        {
            a=n%m;
            n/=m;
            if(a>9)
            a=65+a-10-48;// �ճ�Ӣ����ĸ��ASCֵ
            s.push(a+48);//����48����ASC������
        }
    }
    else
    { 
        while(n)
        {
            a=n%m;
            n/=m;
            if(a>9)
            a=65+a-10-48;// �ճ�Ӣ����ĸ��ASCֵ
            s.push(a+48);//����48����ASC������
        }
        s.push(48);//������һ��0����
    }
    while(!s.empty())
    {
	    cout<<s.top();
        s.pop();
    }
    cout<<endl;
    return 0; 
}