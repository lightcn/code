/**
 * intersection set	(626).cpp
 *
 * Time : 2013-8-12 22:20
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <cstdio>
#include <algorithm> 
using namespace std;
int middle(int array[],int size,int num); 
int main()
{	
	int m, n;
	while (~scanf("%d%d", &m, &n))
	{
		int *arr1 = new int[m];
		int *arr2 = new int[n];
		for (int i = 0; i < m; ++i)
		{
			scanf("%d", &arr1[i]);
		}
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &arr2[i]);
		}
		sort(arr1, arr1 + m);
		sort(arr2, arr2 + n);
		int sum = 0;
		for (int i = 0; i < m; ++i)
		{
			if (middle(arr2, n, arr1[i]) != -1)
				++sum;
		}
		printf("%d\n", sum);
		delete [] arr1;
		delete [] arr2;
	}
	return 0;
}
int middle(int array[],int size,int num)
{  
    int first=0,last=size-1,middle=0;  
    while(first <= last)
	{  
        middle = (first+last)/2;  
        if(array[middle] > num)
		{  
            last = middle-1;  
        }
		else if(array[middle] < num)
		{  
            first = middle+1;  
        }
		else
		{                         
            return middle;  
    	}  
    }  
    return -1;  
}  