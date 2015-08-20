/**
 * 蛋蛋的问题（一）(800).cpp
 *
 * Time : 2013-11-16 12:59
 *
 * Created with C-Free
 *
 * Copyright 2013 zhiliang 
 */
 
#include <cstdio>
#include <cstdlib>
int comp ( const void *a, const void *b );

int main(void)
{
	int n;
	for ( ;~scanf("%d", &n); )
	{
		int* p;
		p = (int *) malloc (sizeof(int)*n);
	
		for (int i = 0; i < n; ++i)
			scanf("%d", &p[i]);
			
		qsort(p, n, sizeof(int), comp);
		for (int i = 0; i < n; ++i)
		{
			putchar(p[i]%26 + 65);
			putchar(' ');
		}
		putchar('\n');
		free(p);
	}
	return 0;
} 
int comp ( const void *a, const void *b )
{
    return * ( int * ) a - * ( int * ) b;
}