#include <cstdio>
#include <cstring>
int main()
{
	char ch[100] = {'\0'};
	while (gets(ch))
	{
		double sum = 0;
		int count = 0;
		bool flag = true;
		for (int i = 0; i < strlen(ch); ++i)
		{
			if ((ch[i] >= 'A' && ch[i] <= 'D')  || ch[i] == ' ' || ch[i] == 'F')
			{
				if (ch[i] == 'A')
				{
					sum += 4;
					++count;
				}
				else if (ch[i] == 'B')
				{
					sum += 3;
					++count;
				}	
				else if (ch[i] == 'C')
				{
					sum += 2;
					++count;
				}
				else if	(ch[i] == 'D')
				{
					sum += 1;
					++count;
				}	
				else if (ch[i] == 'F') 
				{
					++count;
				}
				else
					continue;
			}
			else
			{
				printf("Unknown\n");
				flag = false;
				break;
			}
				
		}
		if (flag)
			printf("%.2lf\n", sum/count);
	}
	return 0;
}
