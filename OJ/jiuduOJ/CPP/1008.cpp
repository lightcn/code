#include <cstdio>
#include <cstring>
int main()
{
    int t;
    while (scanf("%d", &t) == 1)
    {
        char *arr = new char[t];
        for (int i = 0; i < t; ++i)
            arr[i] = '\0';
        size_t n;
        for (int i = 0; i < t; ++i)
        {
            scanf("%u", &n);
            arr[i] = n;
        }
        for (int i = 0; i < t; ++i)
            putchar(arr[i]);
        putchar('\n');
        delete [] arr;
    }
    return 0;
}
