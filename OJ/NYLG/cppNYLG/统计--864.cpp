/*
    URL:http://acm.nyist.net/JudgeOnline/problem.php?pid=864
    Time:2014-2-18
    Name:Í³¼Æ
    Order:864
    Acmer:zzl
*/

#include <stdio.h>

int main(void)
{

    int t;
    scanf("%d", &t);
    char ch[32];
    while (t--)
    {
        unsigned int n;
        scanf("%ud", &n);
        int first = 0, high = 0, low = 0, one = 0;

        if ((n & 1) == 1)
            ch[31] = '1';
        else
            ch[31] = '0';

        for (int i = 30; i >= 0; --i)
        {
            n = n >> 1;  // a *= 2
            if ((n & 1) == 1)
                ch[i] = '1';
            else
                ch[i] = 0;
        }

        for (int i = 31; i >= 0; --i)
        {
            ++first;
            if (ch[i] == '1')
            {
                break;
            }
        }

        int i = 0;
        while (ch[i] != '1' && i <= 31)
        {
            ++high;
            ++i;
        }

        i = 31;
        while (ch[i] != '1' && i >= 0)
        {
            ++low;
            --i;
        }

        for (i = 0; i <= 31; ++i)
        {
            if (ch[i] == '1')
                ++one;
        }
        printf("%d %d %d %d\n", first, high, low, one);
    }
    return 0;
}
