#include <stdio.h>

#define N 100010
typedef unsigned int uint;
uint arr[N];

int main(void)
{
    int sum = 2;
    for (uint i = 1; i < N;)
    {
        if ((0 == sum % 3) || (0 == sum % 5))
        {
            arr[i] = sum;
            ++i;
        }
        ++sum;
    }
    uint n = 0;
    while (scanf("%u", &n) == 1)
    {
        printf("%d\n", arr[n]);
    }
    return 0;
}
