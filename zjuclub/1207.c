#include <stdio.h>
int main(void)
{
    const double high = 100;
    int n;
    while (scanf("%d", &n) == 1)
    {
        double h = high;
        double l = 100;
        for (int i = 0; i < n - 1; i++)
        {
            h /= 2;
            l += h * 2;
        }
        h /= 2;
        printf("%.4f %.4f\n", l, h);
    }
}
