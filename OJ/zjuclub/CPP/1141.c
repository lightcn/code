#include <stdio.h>
#define MAX 50
typedef struct studentinfo {
    int id;
    int grade;
} student;

student s[MAX];

int main(void)
{
#if 0
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    for (int i = 0; i < MAX; i++)
        scanf("%d%d", &s[i].id, &s[i].grade);
    for (int i = 0; i < MAX; i++)
    {
        if (s[i].grade >=80)
            printf("%d %d\n", s[i].id, s[i].grade);
    }
    return 0;
}
