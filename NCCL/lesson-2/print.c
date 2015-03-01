#include <stdio.h>

extern int _start;
int global = 200;
int main(void)
{
    int local = 100;
    printf("_star %p\n", &_start);
    printf("Hello, This is a test!\n");
    printf("local = %d\n", local);
    printf("local = 0x%x\n", local);

    printf("global = %d\n", global);
    printf("global = 0x%x\n", global);

    printf("&local = %p\n", &local);
    printf("&global = %p\n", &global);
    printf("&main = %p\n", main);

    return 0;
}
