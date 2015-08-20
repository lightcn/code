#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int n(0);
	double *l;
	
	cin >> n;
	l = new double[n];
	for (int i = 0; i < n; i++)
	{
		cin >> l[i];
		l[i] = (l[i]/(sqrt(3))) * (l[i]/(sqrt(3))) * 3.1415926;
		
	}
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	for (int j = 0; j < n; j++)
		cout << l[j] << '\n';
	delete [] l;
	return 0;
} 