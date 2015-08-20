#include <stdio.h>
#include <stdlib.h>
void d2b(int d)
{
     if( d )
     {
         d2b(d/2);
         printf("%d",d%2);
     }
}     
int main(int argc, char *argv[])
{
    int a;
    printf("输入一个数:");
    scanf("%d",&a);
    d2b(a);
    system("PAUSE");
    return 0;
}