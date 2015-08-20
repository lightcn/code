#include <stdio.h>
#include <vector>
#include <iostream>
#include <string.h>
using namespace std;
void rev_str(char str[]);
int main(int argc, char **argv)
{
    vector<int> v;
    for (int i = 1000; i < 1112; ++i)
    {
        int temp = i * 9;
        char str1[5];
        sprintf(str1, "%d", i);
        rev_str(str1);

        char str2[5];
        sprintf(str2, "%d", temp);

        if (strncmp(str1, str2, 4) == 0)
            v.push_back(i);
    }
    unsigned int n = v.size();
    for (unsigned int i = 0; i < n; ++i)
        cout << v[i] << endl;
    return 0;
}

void rev_str(char str[])
{
   char temp;
   temp = str[0];
   str[0] = str[3];
   str[3] = temp;

   temp = str[1];
   str[1] = str[2];
   str[2] = temp;
}
