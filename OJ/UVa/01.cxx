#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

struct Job
{
    int j, b;
    bool operator < (const Job& x) const
    {
        return j > x.j;
    }
};
int main()
{
    int n;
    int kcase = 0;
    int b, j;
    while (scanf("%d", &n) == 1 && n)
    {
        vector<Job> vec;
        for (int i = 0; i < n; i++)
        {
            scanf("%d%d",&b, &j);
            vec.push_back((Job) {j, b});
        }
        sort(vec.begin(), vec.end());
        int s = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            s += vec[i].b;
            ans = max(ans, s + vec[i].j);
        }
        printf("Case %d: %d\n", ++kcase, ans);
    }
    return 0;
}
