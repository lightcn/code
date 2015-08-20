/**
 * Created with Code Blocks.
 * User: zhiliang
 * Date: 13-7-1
 * Time:      13:54
 */
//本地测试无误，提交Wrong Answer
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char str1[15], str2[15];
    while (scanf("%s", str1) != EOF && scanf("%s", str2) != EOF)
	{
	    getchar();
	    char str3[14];
	    char str4[14];
	    unsigned int i;
	    unsigned int j = 0;
	    for (i = 0; i < strlen(str1); i++)
        {
            if (isdigit(str1[i]) || (str1[i] == '-'))
            {
                str3[j] = str1[i];
                j++;
            }
        }
   //     str3[strlen(str3)] = '\0';
        j = 0;
        for (i = 0; i < strlen(str2); i++)
        {
            if ((str2[i] >= '0' && str2[i] <= '9') || (str2[i] == '-'))
            {
                str4[j] = str2[i];
                j++;
            }
        }
//        str4[strlen(str4)] == '\0';
        int sum = (atoi(str3)) + (atoi(str4));

        printf("%d\n", sum);
	}
	return 0;
}

