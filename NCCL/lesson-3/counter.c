#include <stdio.h>

int main(void)
{
    int counter = 0;

    printf("count your fingers\n");
    counter = 0;
    while (1)
    {
        counter = counter + 1;
        printf("counter = %d\n", counter);
    }
    return 0;
}
