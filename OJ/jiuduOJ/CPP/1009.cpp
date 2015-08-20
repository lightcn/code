#include <cstdio>

int main(void)
{
	double a;
    double sum = 0;
    for (unsigned int i = 0; i < 12; ++i)
    {
        scanf("%lf", &a);  // 浮点数的格式为lf 
        sum += a;
    }
    printf("￥%.2lf\n", sum / 12);
    return 0;
}

