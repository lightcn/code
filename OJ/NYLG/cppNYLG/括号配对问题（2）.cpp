/*
    Time 2014-4-20
    南洋理工：括号配对问题（2）
    栈的数组实现方法
    author Light
    E-mail zhilight@gmail.com
    程序在追加空间的时候会出现问题
*/

#include <cstdlib>
#include <cstdio>
#include <cstring>

const int STACK_INIT_SIZE = 100;
const int STACK_INCREMENT = 20;

typedef char stack_type;

class Stack
{
public:
    Stack();
    ~Stack();
    bool pop();
    bool push(const stack_type &e);
    stack_type gettop() const;
    int length() const;
private:
    stack_type *base;
    stack_type *top;
    int stacksize;
};

Stack::Stack()
{
    base = (stack_type *)malloc(STACK_INIT_SIZE * sizeof(stack_type));
    if (base == NULL)
        exit(1);
    top = base;
    stacksize = STACK_INIT_SIZE;  //此处不能有返回值
}

bool Stack::push(const stack_type &e)
{
    if ((top - base) >= stacksize)
    {
        base = (stack_type *)realloc(base, (stacksize + STACK_INCREMENT) * sizeof(stack_type));
        if (base == NULL)
            return false;
        stacksize += STACK_INCREMENT;
    }
    *top = e;
    top++;
    return true;
}

stack_type Stack::gettop() const
{
    return *(top - 1);
}
bool Stack::pop()
{
    if (top == base)
        return false;
    else
    {
        top--;
        return true;
    }
}

Stack::~Stack()
{
    free(base);
    base = NULL;
    top = NULL;
    stacksize = 0;
}

int Stack::length() const
{
    return (top - base);
}
char buf[10011];

int main(void)
{
    int m;
    scanf("%d", &m);
    getchar();
    while (m--)
    {
        Stack *s = new Stack();
        gets(buf);
        int length = strlen(buf);
        bool flag = true;
        for (int i = 0; i < length; ++i)
        {
            if (s->length() != 0)
            {
                char ch = s->gettop();
                if ((ch == '[' && buf[i] == ']') || (ch == '(' && buf[i] == ')'))
                    s->pop();
                else if ((buf[i] == '(' || buf[i] == '[') )
                {
                    s->push(buf[i]);
                }
                else
                {
                    printf("No\n");
                    flag = false;
                    break;
                }
            }
            else
            {
                if (buf[i] == ']' || buf[i] == ')')
                {
                    printf("No\n");
                    flag = false;
                    break;
                }
                else
                    s->push(buf[i]);
            }
        }
        if (flag)
        {
            if (s->length() == 0)
                printf("Yes\n");
        }
        else if(flag)
            printf("No\n");
    }
    return 0;
}
