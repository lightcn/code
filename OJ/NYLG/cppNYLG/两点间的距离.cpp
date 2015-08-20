// 题目 101 
//没有 ac 的原因 ，最后没有换行 
#include <iostream>
#include <cmath> 
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	while (n--)
	{
		double x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))<<endl; //需要换行 
	}
	return 0;
}