#include <iostream>
#include <cstdlib>
using namespace std;

typedef int e_type;
typedef int * e_point;

class Stack
{
	public:
		Stack();
		~Stack();
	//	Stack(const Stack& s);
		bool pop();
		bool push(const e_type &e);
		int size() const;
		bool is_empty() const;
		e_type get_top() const;
	//	Stack operator =(const Stack &e);
	private:
		e_point base;
		int size;
		int increment;
		int index;
		e_point top;
}

Stack::Stack()
{
	size = 100;
	base = (e_type*)malloc(size * sizeof(e_type));
	increment = 30;
	top = base;
	index = 0;
}

bool Stack::push(const e_type &e)
{
	if (size == index)
	{
		base = (e_type*)realloc(base, (size + increment) * sizeof(e_type));
		if (base == NULL)
			return false;
		size += insrement;
	}
	else
	{
		base[index++] = e;
		top = &base[index];
	}
}

bool Stack::pop()
{
	if (top == base)
		return false;
	else
	{
		top = &base[--index];
		return true;
	}
}

e_type Stack::get_top() const
{
	return *(top - 1);
}

bool Stack::is_empty() const
{
	return base == top;
}

int Stack::size() const
{
	return index;
}

Stack::~Stack()
{
	delete [] base;
	base = NULL;
	top = NULL;
	index = 0;
	increment = 0;
	size = 0;
}
int main()
{
	int num;
	int base;
	while (cin >> num >> base)
	{
		Stack *s = new Stack();
		while (num)
		{
			s->push(num % base);
			num /= base;
		}
		while(true)
		{
			cout << s->get_top();
			if (!s->pop())
			{
				cout << endl;
				break;
			}
		}
	}
	return 0;
}











