/*
    Time 2014-4-20
    ������������������⣨2��
    ջ������ʵ�ַ���
    author Light
    E-mail zhilight@gmail.com
    ������׷�ӿռ��ʱ����������
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
        // Node ��Ĺ��캯��
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
