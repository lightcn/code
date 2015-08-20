/**
 * Old Calculator(486).cpp
 *
 * Time : 2013-10-9 22:59
 *
 * Created with Dev¡ªCPP 
 *
 * Copyright 2013 zhiliang
 */
 
 #include <cstdio>

int main(void)
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int a, b, r;
		char op1, op2;
		scanf("%d%c%d%c%d", &a, &op1, &b, &op2, &r);
		switch (op1)
		{
			case '+':
				if (a + b == r)
					printf("Accept\n");
				else
				{
					printf("Wrong Answer\n");
					printf("%d\n", a + b);
				}
				break;
			case '-':
				if (a - b == r)
					printf("Accept\n");
				else
				{
					printf("Wrong Answer\n");
					printf("%d\n", a - b);
				}
				break;
			case '*':
				if (a * b == r)
					printf("Accept\n");
				else
				{
					printf("Wrong Answer\n");
					printf("%d\n", a * b);	
				}
				break;
			case '/':
				if (b == 0)
					printf("Input Error\n");
				else
				{
					if (a / b == r)
						printf("Accept\n");
					else
					{
						printf("Wrong Answer\n");
						printf("%d\n", a / b);
					}
				}
				break;
			case '%':
				if (b == 0)
					printf("Input Error\n");
				else
				{
					if (a % b == r)
						printf("Accept\n");
					else
					{
						printf("Wrong Answer\n");
						printf("%d\n", a % b);
					}
				}
			default:
				break;
		}
	}
	
} 