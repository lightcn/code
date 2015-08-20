#include <stdio.h>
#include <stdlib.h>

typedef int datatype;
typedef struct lnode
{
    datatype data;
    lnode *next;
}*head;


/*create a new link node*/
void creat(lnode *head)
{
    printf("How many node do you want to creat?\n");
    int l;
    scanf("%d", &l);
    int *arr = (int *)malloc(sizeof(int) * l);
    printf("Input %d number:\n", l);
    for (int i = 0; i < l; ++i)
    {
        scanf("%d", arr[i]);
    }
    
    lnode *cur = (lnode *)malloc(sizeof(lnode));

    head->next = cur;
    for (int i = 0; i < l; ++i)
    {
        lnode *temp = (lnode *)malloc(sizeof(lnode)); /*malloc space for the new node */
        
        cur->data = temp->data = arr[i];
        cur->next = temp;
        cur->next->next = NULL;
        
    }
    free(arr);
    arr = NULL;
}

/*travel the link node*/
bool travel(lnode *head)
{
    lnode *cur = head;
    while (cur->next != NULL)
    {
        printf("%d ", cur->next->data);
    }
    printf("\n");
    return true;
}

int maim(void)
{
    creat(head);
    bool f = travel(head);

    return 0;
}
