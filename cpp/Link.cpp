#include <iostream>
using namespace std;

class Link
{
public:
	Link();
	void setData(int _data);
	int getData() const;
	int add(int _data);
	void del();
	~link();
private:
	Link *left;
	link *right;
	int data;		
}
link::link()
{
	data = 0;
	left = NULL;
	right = NULL;
}
void Link::setData(int _data)
{
	data = _data;
}
void Link::getData() const
{
	return data;
}
int Link::add(int _data)
{
	Link *node = new Link;
	this->right->node;
	node->right->this;
	node->data = _data;
}