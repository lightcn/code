/**
 * Coin Test(204).cpp
 *
 * Time : 2013-8-10 21:44 
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <cstring>
#include <cstdio>

int gcd(int a, int b);
int main()
{
	int t;	
	while(~scanf("%d", &t))
	{
		getchar();
		char *ch = new char[t+1];
		int cnt = 0;
		gets(ch);
		bool flag = true;
		for (int i = 0; i < strlen(ch); ++i)
		{
			if (ch[i] == 'S')
			{
				printf("Bingo\n");
				flag = false;
				break;
			}
			else if (ch[i] == 'U')
				++cnt;
		}
		
	//	cout << (double)cnt/(double)t << endl;
		double tmp = (double)cnt/(double)t - 0.5;
		if (tmp < 0)
		{
			tmp *= double(-1);
		}
		if (tmp <= 0.003 && flag)
		{
			int m = gcd(t, cnt);
			printf("%d/%d\n", cnt/m, t/m);	
		}
		else if (flag)
		{
			printf("Fail\n");
		}
 	}
	return 0;
}

int gcd(int a, int b)
{
    int x;
    while (1)
    {
        x = a % b;
        if (x == 0)
            return b;
        else
        {
            a = b;
            b = x;
        }
    }
}