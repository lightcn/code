/**
 * ÊýÊý(198).cpp
 *
 * Time : 2013-10-11 22:56
 *
 * Created with Dev¡ªCPP 
 *
 * Copyright 2013 zhiliang
 */
#include <cstdio>

int main(int argc, char** argv) 
{
	int T;
	scanf("%d", &T);

	while (T--)
	{
		int num;
		scanf("%d", &num);
		while (num != 0)
		{
			int temp = num % 10;
			num /= 10;
			switch (temp)
			{
				case 0:
					printf("O");
					break;
				case 1:
					printf("O");
					break;
				case 2:
					printf("T");
					break;
				case 3:
					printf("T");
					break;
				case 4:
					printf("F");
					break;
				case 5:
					printf("F");
					break;
				case 6:
					printf("S");
					break;
				case 7:
					printf("S");
					break;
				case 8:
					printf("E");
					break;
				case 9:
					printf("N");
					break;
				default :
					break;
			}
		}
		printf("\n");
	} 
	return 0;
}