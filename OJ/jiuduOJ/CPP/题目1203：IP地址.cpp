/**
 * Ã‚ƒø1203£∫IPµÿ÷∑.cpp
 *
 * Time : 2013-9-30 21:00
 *
 * Created with C-free 
 *
 * Copyright 2013 zhiliang
 */
#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int m, x, y, z;
		scanf("%d.%d.%d.%d", &m, &x, &y, &z);
		if ((m >= 0 && m <= 255) && (x >= 0 && x <= 255) && (y >= 0 && y <= 255) && (z >= 0 && z <= 255))
			printf("Yes!\n");
		else
			printf( "No!\n");
	}	
    return 0;
}