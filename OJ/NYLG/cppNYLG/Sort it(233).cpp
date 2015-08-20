/**
 * Created with Qt Creator.
 * User: zhiliang
 * Date: 13-7-11
 * Time:      12:39
 */
#include <iostream>

using namespace std;

void swap(int *a, int *b);

int main()
{
    int n;
    //cin >> n;  //多写了一个cin >> n; 结果怎么也检查不出错误
    while (cin >> n)
    {
        int *a = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        for(int i = 0; i < n-1; i++) // 大循环，用于控制程序不再对已经排好序的数进行比较
        {

            int flag = 0;
            for(int j = n-1; j > i; j--) // 小循环，用于从后往前依次比较相邻数的大小，如果后者小于前者，交换相邻元素
            {
                if(a[j] < a[j-1])
                {
                    swap(&a[j], &a[j-1]);
                    ++cnt;
                }
                flag = 1; // 当此轮比较有交换发生，则继续比较
            }
            if (flag == 0)
            {
                break;
            }
         }
        cout << cnt << '\n';
        delete [] a;
    }

    return 0;
}

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}

