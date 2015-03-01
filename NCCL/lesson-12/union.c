#include <stdio.h>

union test {
    int n;
    char ch[4];
};

typedef union test test_t;

int main(void)
{
    printf("Judege your machine is little endian!\n");
    printf("The size of the union is %d\n", sizeof(union test));
    test_t t;
    t.n = 0x12345678;
    printf("t.n = 0x%x\n", t.n);
    printf("t.ch[0] = 0x%x\n", t.ch[0]);
    printf("t.ch[1] = 0x%x\n", t.ch[1]);
    printf("t.ch[2] = 0x%x\n", t.ch[2]);
    printf("t.ch[3] = 0x%x\n", t.ch[3]);

    return 0;
}
