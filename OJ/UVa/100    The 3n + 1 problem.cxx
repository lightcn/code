/**
 * 100	The 3n + 1 problem.cxx
 *
 * Time : 2013-8-4 16:39
 *
 * Created with Qt Creator
 *
 * Copyright 2013 zhiliang <zhiliang@ubuntu>
 */
#include <iostream>

using namespace std;

int main()
{
    int m, n;
    while (cin >> m >> n)
    {
        int x = m;
        int y = n;
        if (x > y)
        {
            int tmp = x;
            x = y;
            y = tmp;
        }
        int max = -1;
        for (int i = x; i <= y; ++i)
        {
            int cnt(1);
            int cur = i;
            do
            {
                if (cur == 1)
                    break;
                else if (cur % 2 == 0)
                {
                    cur /= 2;
                    ++cnt;
                }
                else
                {
                    cur = cur * 3 + 1;
                    ++cnt;
                }
            } while (cur != 1);
            if (max < cnt)
                max = cnt;
        }
        cout << m << ' ' << n << ' ' << max << endl;
    }

    return 0;
}


