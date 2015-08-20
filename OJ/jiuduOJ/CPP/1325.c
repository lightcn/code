#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Lnode
{
    char name[32];
    struct Lnode *next;
}LNode;

void Insert(LNode *head, char *str, int pos);
void PrintLNode(LNode *head);
void DeleteNode(LNode *head, char *str);
int FindNode(LNode *head, char *str);

void DestroyLNode(LNode *head);
//每次循环结束以后都不要忘记销毁链表
//要是C语言有析构函数就好了，每次都可以自动调用

int main(void)
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
	char command[8];
	LNode *head = (LNode *)malloc(sizeof(LNode));
	while (scanf("%s", command) != EOF)
	{

		char name[32];
		if (strcmp(command, "insert") == 0)
		{
			int pos;
			scanf("%d%s", &pos, name);
			Insert(head, name, pos);
		}
		else if (strcmp(command, "delete") == 0)
		{
			scanf("%s", name);
			DeleteNode(head, name);
		}
		else if (strcmp(command, "show") == 0)
		{
			PrintLNode(head);
		}
		else
		{
			scanf("%s", name);
			printf("%d\n", FindNode(head, name));
		}
	}
	DestroyLNode(head);
    return 0;
}

void Insert(LNode *head, char *str, int pos)
{
    LNode *cur;
    if (head->next == NULL)
    {
        cur = (LNode *)malloc(sizeof(LNode));
        strcpy(cur->name, str);
        cur->next = NULL;
        head->next = cur;
    }
    else
    {
        int tmp = 1;
        cur = head;
        while (tmp < pos)
        {
            cur = cur->next;
            tmp++;
        }
        LNode *L = (LNode *)malloc(sizeof(LNode));
        strcpy(L->name, str);
        L->next = cur->next;
        cur->next = L;
    }
}

void PrintLNode(LNode *head)
{
    LNode *cur = head->next;
    int i = 1;
    while (cur)  //此处如若写成cur = cur->next;
    {
        if (cur->next == NULL && i != 1)
            printf("%s", cur->name);
        else
            printf("%s ", cur->name);
        cur = cur->next;
        ++i;
    }
    printf("\n");
    return;
}

void DeleteNode(LNode *head, char *str)
{
	LNode *cur = head;
	while (strcmp(cur->next->name, str) != 0)
	{
		cur = cur->next;
	}
	LNode *p = cur->next;
	cur->next = cur->next->next;
	free(p);
	p = NULL;
}

int FindNode(LNode *head, char *str)
{
	int pos = 1;
	LNode *cur = head->next;
	while (strcmp(cur->name, str) != 0)
	{
		pos++;
		cur = cur->next;
	}
	return pos;
}

void DestroyLNode(LNode *head)
{
	LNode *cur = head;
	LNode *temp;
	while (cur)
	{
		temp = cur->next;
		free(cur);
		cur = temp;
	}
}





