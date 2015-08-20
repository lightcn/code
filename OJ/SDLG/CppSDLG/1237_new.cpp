/**
 * 数据结构实验之链表一：顺序建立链表.cpp
 * Created with codeblocks
 * User: zhiliang
 * Date: 14-3-25
 * Time:      12:25
 * URL:http://acm.sdut.edu.cn/sdutoj/showproblem.php?pid=2116&cid=1237
 */


#include <stdio.h>

struct node
{
    int data;
    node *next;
};

class slist
{
public:
    slist(const int *dat, int size);
    void travel();
    ~slist();
private:
    node *head;
};

slist::slist(const int *dat, int size)
{
    head = NULL;
    node *cur = NULL;
    for (int i = 0; i < size; ++i)
    {
        node *s = new node; /*关于指针赋值的一个问题 */
        if (i == 0)
        {
            head = s;
            s->data = dat[0];
            s->next = NULL;
            cur = s;
        }
        else
        {
            cur->next = s;
            s->data = dat[i];
            s->next = NULL;
            cur = s;
        }
    }
}

void slist::travel()
{
    node *cur = head;
    while (cur != NULL)
    {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    putchar('\n');
}
slist::~slist()
{
    node *cur = head;
    while (cur != NULL)
    {
        node *t = cur;
        cur = cur->next;
        delete t;
    }
    head = NULL;
    cur = NULL;
}
int main(void)
{
    int m;
    while (~scanf("%d", &m))
    {
        int *arr = new int[m];
        for (int i = 0; i < m; ++i)
        {
            scanf("%d", &arr[i]);
        }
        slist *sl = new slist(arr, m);
        sl->travel();
        delete [] arr;
        arr = NULL;
    }
    return 0;
}
