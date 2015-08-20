#include <iostream>
#include <set>
struct node
{
	int data;
	node *next;
}

class slist
{
	public:
		slist(const int *arr, int size);
		node *travle_list(node *head);
		int count() const;
		~slist();
	private:
		node *head;
}

slist::slist(const int *arr, int size)
{
	node *cur = new node;
	head = cur;
	cur->next = NULL;
	for (int i = 0; i < size; ++i)
	{
		node *s = new node;
		s->data = arr[i];
		s->next = cur->next;
		cur->next = s;
	}
}

node *slist::travel_list()
{
	std::set<int> collect;
	node *cur;
	cur = head;
	while (cur->next != NULL)
	{
		if (collect.insert(cur->next->data))
			std::cout << cur = cur->next << " " ;
		else
		{
			node *s = cur->nest;
			cur = cur->next->next;
			delete s;
		}
	}
	std::cout << '\n';
}

int slist::count() const
{
	int sum = 0;
	while (cur->next != NULL)
	{
		++sum;
		sum = sum->next;
	}
	return sum;
}
slist::~slist()
{
	node *cur = head;
	while (cur->next != NULL)
	{
		node *s = cur;
		cur = cur->next;
		delete s;
	}
	delete head;
	head = NULL;
}

int main(int argc, char **argv)
{
	using std::cin;
	using std::cout;
	int num;
	while (cin >> num)
	{
		int *arr = new int[num];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}

		delete [] arr;
	}
	return 0;
}

