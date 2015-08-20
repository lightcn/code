/**
 * Created with Qt Creator.
 * User: zhiliang
 * Date: 13-8-3
 * Time:     21:23
 */

#include <iostream>

using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {
        if (n == 0)
            break;
        int *arr = new int[n];
        int MinNum;
        int flag = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            if (i == 0)
            {
                MinNum = arr[i];
                flag = i;
            }
            else
            {
                if (arr[i] < arr[flag])
                {
                    MinNum = arr[i];
                    flag = i;
                }
            }
        }
        int tmp = arr[flag];
        arr[flag] = arr[0];
        arr[0] = tmp;
        for (int i = 0; i < n; ++i)
        {
            cout << arr[i] << ' ';
        }
        cout << endl;
        delete [] arr;
    }
    return 0;
}

