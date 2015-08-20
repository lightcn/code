#include <iostream>
#include <vector>
#include <cmath>
 
using namespace std;

int main(void)
{
	int a, b;
	while (cin >> a >> b)
	{
		if (a == 0)
			cout << '0' << endl;
		else if (b == 0)
			cout << '1' <<endl;
		else
		{
			vector<int> v;
			int c;
			int num;
			do
			{
				c = int(pow(a, 1));
				num = c%10;
				v.push_back(num);
			}while 
			
			
		}
		
	}
	return 0;
}