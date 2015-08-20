#include <stdio.h>

int main(void)
{
    int year;
    while (scanf("%d", &year) == 1)
    {
        if ((year % 100) == 0 && (year % 400) == 0)
            printf("leap year\n");
        else if ((year % 100) != 0 && (year % 4) == 0)
            printf("leap year\n");
        else 
            printf("not leap year\n");
    }
    return 0;
}
