/**
 * 题目1374：所有员工年龄排序.cpp
 *
 * Time : 2013-11-24 23:26
 *
 * Created with Qt
 *
 * Copyright 2013 zhiliang
 */

#include <cstdio>
#include <algorithm>
using namespace  std;

int main()
{
    int n;
    while (~scanf("%d", &n))
    {
        int *arr = new int[n];
        for (int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);
        sort(arr, arr + n);
        for (int i = 0; i < n; ++i)
            printf("%d ", arr[i]);
        printf("\n");
        delete [] arr;
    }
    return 0;
}


