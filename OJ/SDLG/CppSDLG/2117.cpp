/*
URL:http://acm.sdut.edu.cn/sdutoj/showproblem.php?pid=2117&cid=1237
author:zzl
time:2014-3-28
÷ÿππ£∫2014-3-28 £∫ 13:25
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
    head = new node;
    head->next = NULL;
    node *cur;
    for (int i = 0; i < size; ++i)
    {
        cur = new node;
        cur->data = arr[i];
        cur->next = head->next;
        head->next = cur;
    }
}

void rslist::travel()
{
    node *cur  = head->next;
    while (cur != NULL)
    {
        cout <<cur->data << " ";
        cur = cur->next;
    }
}
rslist::~rslist()
{
    node *cur = head->next;
    while (cur != NULL)
    {
        node *t;
        t = cur;
        cur = cur->next;
        delete t;
    }
    delete head;
    head = NULL;
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
