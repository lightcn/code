/*
    Time 2014-4-20
    南洋理工：括号配对问题（2）
    栈的数组实现方法
    author Light
    E-mail zhilight@gmail.com
    程序在追加空间的时候会出现问题
*/

#include <iostream>
#include <new>

typedef int StackElement;
class Stack
{
public:
    Stack();
    Stack(const Stack &original);
    ~Stack();
    void Push(const StackElement &value);
    StackElement Top() const;
    const Stack &operator=(const Stack &rightHandSide);
private:
    class Node
    {
    public:
        StackElement data;
        Node *next;
        // Node 类的构造函数
        Node(StackElement value, Node *link = 0):data(value), next(link)
        {
            //empty
        }
    };
    typedef Node *NodePtr;
    NodePtr myTop;

};
int main(void)
{
    cout << "Hello World!\n";
    return 0;
}
