/**
 * 子窜和(44).CPP
 *
 * Time : 2013-8-4 16:39
 *
 * Created with Qt Creator
 *
 * Copyright 2013 zhiliang <zhiliang@ubuntu>
 */
#include <cstdio>

int main()
{
    int N;
    scanf("%d", &N);
    while (N--)
    {
        int n;
        scanf("%d", &n);

        int first;
        scanf("%d", &first);
        int sum = first;

        int x;
        for (int i = 0; i < n-1; ++i)
        {
            scanf("%d", &x);
            if (first < 0)
                first = x;
            else
                first += x;
            if (first > sum)
                sum = first;

        }
        printf("%d\n", sum);
    }
    return 0;
}


