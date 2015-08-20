#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
double add(int n, ... );

int main(void)
{
	printf("%f\n", add(3, 1.1, 1.2, 1.3));
	return 0;
}

double add(int n, ... )
{
	double sum = 0.0;
	va_list argptr;
	va_start(argptr, n);
	for (int i = 0; i < n; ++i) {
		sum += va_arg(argptr, double);
	}
	va_end(argptr);
	return sum;
}
