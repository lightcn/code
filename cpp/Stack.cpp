/*
 * 使用正向链表
 * 和反向链表和动态数组来实现一个栈
 * @author : light
 * E-mail: zhilight@gmail.com
 *
 * */

#include <iostream>
using namespace std;

struct node 
{
	int data;
	node *next;
}

class Stack
{
	public:
		Stack();
		bool pop();
		int top() const;
		bool push(const int data);
		int size() const;
		~Stack();
	private:
		node *p_top;
		node *p_bottom;
		node *cur;
		int size;
}

Stack::Stack()
{
	p_top = p_bottom = NULL;
	size = 0;
}

int Stack::push(const int data)
{
	node *temp;
	if (size == 0)
	{
		temp = new node;
		temp->data = data;
		p_bottom = temp;
		p_top = temp;
		cur = temp;
		cur->next = NULL;
		++size;
	}
	else
	{
		temp = new node;
		node->data = data;
		p_top = temp;
		cur->next = temp;
		cur = cur->next;
		cur->next = NULL;
	}
}

int Stack::top() const
{
	return p_top->data;
}

int Stack::size() const
{
	return size;
}

Stack::~Stack()
{
	while ()
}

bool Stack::pop()
{
	
}











