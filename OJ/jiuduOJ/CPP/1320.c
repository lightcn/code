#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int var;
	int n = 0XAAAAAAAA;
	while (scanf("%u", &var) == 1)
	{
		printf("%u\n", var & n);
	}
	return 0;
}



