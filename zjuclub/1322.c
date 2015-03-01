#include <stdio.h>
int main(void)
{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    char ch[32];
    while (gets(ch))
    {
        if (ch[0] == '0')
            puts(ch);
        else
        {
            for (int i = 1; i < 16; i++)
                ch[i] = (ch[i] == '1' ? '0' : '1');
            for (int i = 15; i > 0; i--)
            {
                if (ch[i] == '1')
                    ch[i] = '0';
                else
                {
                    ch[i] = '1';
                    break;
                }
            }
            puts(ch);
        }
    }
  //  fclose(stdin);
  //  fclose(stdout);
    return 0;
}













