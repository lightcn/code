#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main(void)
{
    int a = 1234;
    int b = 4321;
    char str1[5];
    char str2[5];
    sprintf(str1, "%d", a);
    strrev(str1);
    cout << "str1 is " << str1 << endl;
    sprintf(str2, "%d", b);
    cout << "str2 is " << str2 << endl;
    int r = strncmp(str1, str2, 4);
    cout << r << endl;
    return 0;
}
