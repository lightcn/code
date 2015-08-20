/**
 * 题目1031：xxx定律.cpp
 *
 * Time : 2013-8-5 10：20
 *
 * Created with DevCpp
 *
 * Copyright 2013 zhiliang
 */
#include <iostream>

using namespace std;

int main()
{
    int cur;
    while (cin >> cur)
    {   
    	if (cur == 0)
    		break;
        int cnt(0);       
        while (cur != 1)
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
                cur /= 2;
                ++cnt;
            }
        }                  
        cout << cnt << endl;
    }

    return 0;
}
