/**
 * ¹úÍõµÄÄ§¾µ(264).cpp
 *
 * Time : 2013-8-12 9:48 
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <cstdio>
#include <cstring>

char str[101];
 
int main()
{
	int n; 
	scanf("%d", &n);
	getchar();
	while (n--)
	{		
		gets(str);
		if (strlen(str) % 2 != 0)
		{
			printf("%d\n", strlen(str));
		}
		else
		{
		//	strcpy(str, ch);
			bool flag = true;
			do
			{
				if (strlen(str) % 2 != 0)
				{
					printf("%d\n", strlen(str));
					break;
				}
				else
				{
					for (int i = 0; i < strlen(str) / 2; ++i)
					{
						if (str[i] != str[strlen(str) - 1 -i])
						{
							printf("%d\n", strlen(str));
							flag = false;
							break;
						}
					}
					if (flag)
					{
						if (strlen(str) == 2 && str[0] == str[1])
						{
							printf("1\n");
							break;
						}
						str[strlen(str) / 2] = '\0';
					}
					else
					{
						break;
					}
				}
				
			}while (strlen(str) != 1);	
		}
	}
	return 0;
}
