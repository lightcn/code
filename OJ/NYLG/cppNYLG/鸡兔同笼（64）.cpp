/**
 * Created with Code Blocks.
 * User: zhiliang
 * Date: 13-7-11
 * Time:      12:39
 */
#include <iostream>

using namespace std;

int main()
{
    int a, b, n, m;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        a = (4*n-m)/2;
        b = n - a;
        if (m % 2 == 1 || a < 0 || b < 0)
        {
            cout << "No answer\n";
        }
        else
        {
            cout << a << ' ' << b << '\n';
        }
    }
    return 0;
}

