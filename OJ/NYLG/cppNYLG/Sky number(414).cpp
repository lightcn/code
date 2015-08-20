/**
 * Sky number(414).cpp
 *
 * Time : 2013-8-23 9:59
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
 
 #include<stdio.h>
int main()
{
	int n,t,p,q,s1,s2,s3,m;
	while(scanf("%d",&n),n)
	{ 
		m=n;s1=0;s2=0;s3=0;
		while(n)
		{
			t=n%10;
			s1+=t;
			n=n/10;
		}
		n=m;
		while(n)
		{
			p=n%16;
			s2+=p;
			n=n/16;
		}
		n=m;
		while(n)
		{
			q=n%12;
			s3+=q;
			n=n/12;
		}
		if(s1==s2&&s1==s3&&s2==s3)
			printf("%d is a Sky Number.\n",m);
		else
			printf("%d is not a Sky Number.\n",m);
	}
}