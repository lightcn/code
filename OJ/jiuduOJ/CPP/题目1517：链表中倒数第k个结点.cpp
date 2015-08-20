/*
    URL:http://ac.jobdu.com/problem.php?pid=1517
    Time:2014-3-20
    Name:题目1517：链表中倒数第k个结点
    Acmer:zzl
*/

#include <iostream>

struct node
{
    int data;
    node *pre;
    node *next;
};

class linknode
{
public:
    linknode(const int *arr, unsigned int n);
    int find(unsigned int k);
    ~linknode();
private:
    node *head;
    node *tail;
};

linknode::linknode(const int *arr, unsigned int n)
{
    tail = NULL;
    head = NULL;
    for (unsigned int i = 0; i < n; ++i)
    {
        node *lk = new node;
        if (i == 0)
        {
            head = lk;
            lk->data = arr[0];
            lk->pre = NULL;
            lk->next = NULL;
            lk = tail;
        }
        else
        {
            lk->pre = tail;
            lk->data =  arr[i];
            lk->next = NULL;
            tail = lk;
        }
    }
}

int linknode::find(unsigned int k)
{
    int mdata;
    while (k--)
    {
        mdata = tail->data;
        tail = tail->pre;
    }
    return mdata;
}

linknode::~linknode()
{
    node *cur = head;
    node *t = NULL;
    while (cur != NULL)
    {
        t = cur;
        cur = cur->next;
        delete t;
    }
}
int main(void)
{
    using namespace std;

    unsigned int n, k;
    while (cin >> n >> k)
    {
        int *arr = new int[n];
        for (unsigned int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        if ((k == 0) || (k > n))
        {
            cout << "NULL" << endl;
        }
        else
        {
            linknode *p = new linknode(arr, n);
            int m = p->find(k);
            cout << m << endl;
        }
        delete [] arr;
    }
    return 0;
}
