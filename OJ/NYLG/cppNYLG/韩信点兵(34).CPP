#include <iostream>
using std::cin;
using std::cout;
void found(int a, int b, int c)
{
	int flag = 0;
	for (int i = 10; i <= 100; i++)
	{
		if ((i%3) == a && (i%5) == b && (i%7) == c)
		{
			cout << i << '\n';
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		cout << "No answer\n";
	return;
}
int main(void)
{
	int a, b, c;
	while (cin >> a >> b >> c)
	{
		found(a, b, c);
	}
	return 0;	
}