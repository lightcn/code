 #include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int sum=0;
		int cnt=0;
		while(1)
		{
			++cnt;
			sum=(sum*10+1)%n;
			if(sum==0)
				break;
		}
		printf("%d\n",cnt);
	}
	return 0;
}        