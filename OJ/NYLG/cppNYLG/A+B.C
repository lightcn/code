#include <iostream>
using std::cin;
using std::cout;
int main(void)
{
	int a, b;
	while (cin >> a >> b)
	{
		cout << a+b <<'\n';
	}
	return 0;
}
*******************************************************************
#include <stdio.h>

int main(void)
{
	int a, b;
	while (scanf("%d%d", &a, &b) != EOF)
	{
		printf("%d\n", a+b);
	}
	return 0;
}
 //为何C语言的版本总是超时