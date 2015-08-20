#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    char str[24];
    while (gets(str))
    {
        sort(str, str + strlen(str));
        printf("%s\n", str);
    }
    return 0;
}
