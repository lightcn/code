#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);

int call_func(int (*func)(int a, int b), int a, int b);

int main(int argc, char **argv)
{
    int r1 = call_func(add, 3, 2);
    int r2 = call_func(sub, 3, 2);
    printf("r=%d, r2=%d\n", r1, r2);
    return 0;
}

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}

int call_func(int (*func)(int a, int b), int a, int b)
{
    return func(a, b);
}
