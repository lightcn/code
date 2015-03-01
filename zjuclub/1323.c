#include <stdio.h>

int a[200], b[100];

int is_in(int *arr, int data, int size);
void insert(int *a, int *size, int data);
void output(int *arr, int size);
void input(int *arr, int size);

int main(void)
{
    int m, n;
    int temp;
    while ((temp = scanf("%d", &m)) == 1)
    {
        input(a, m);
        temp = scanf("%d", &n);
        input(b, n);

        output(a, m);
        output(b, n);

        for (int i = 0; i < n; i++)
        {
            if (!is_in(a, b[i], m))
                insert(a, &m, b[i]);
            output(a, m);
        }
        putchar('\n');
    }

    return 0;
}

int is_in(int *arr, int data, int size)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == data)
            return 1;
    }
    return 0;
}

void insert(int *a, int *size, int data)
{
    a[*size] = data;
    (*size)++;
}

void output(int *arr, int size)
{
    int flag = 1;
    for (int i = 0; i < size; ++i)
    {
        if (flag) {
            printf("%d", arr[i]);
            flag = 0;
        }
        else printf(" %d", arr[i]);
    }
    putchar('\n');
}

void input(int *arr, int size)
{
    int temp;
    for (int i = 0; i < size; ++i)
        temp = scanf("%d", &arr[i]);
    temp++;
    return;
}






