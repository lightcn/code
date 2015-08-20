/*
URL:http://acm.sdut.edu.cn/sdutoj/showproblem.php?pid=2117&cid=1237
author:zzl
time:2014-3-28
*/

#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

class rslist
{
public:
    rslist(int arr[], int size);
    void travel();
    ~rslist();
private:
    node *head;
};

rslist::rslist(int arr[], int size)
{
    head = NULL;
    node *cur;
    for (int i = 0; i < size; ++i)
    {
        if (i != 0)
        {
            cur = new node;
            cur->data = arr[i];
            cur->next = head;
            head = cur;
        }
        else
        {
            cur = new node;
            cur->data = arr[i];
            cur->next = NULL;
            head = cur;
        }
    }
}

void rslist::travel()
{
    node *cur  = head;
    while (cur != NULL)
    {
        cout <<cur->data << " ";
        cur = cur->next;
    }
}
rslist::~rslist()
{
    node *cur = head;
    while (cur != NULL)
    {
        node *t;
        t = cur;
        cur = cur->next;
        delete t;
    }

    cur = NULL;
}
int main()
{
    int n;
    while (cin >> n)
    {
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        rslist *rs = new rslist(arr, n);
        rs->travel();
        cout <<endl;
        delete rs;
    }
    return 0;
}
