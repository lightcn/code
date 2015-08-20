#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void)
{
	double x1, y1, x2, y2, x3, y3;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3)
	{
		if ((x1==0) && (y1==0) && (x2==0) && (y2==0) && (x3==0) && (y3==0))
			break;
		else 
		{
			double a =  sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
			double b =	sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
			double c =	sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
			double p = ((a + b +c)/2);
            //double s = sqrt(p*(p-a)*(p-b)*(p-c));
            cout.setf(ios::fixed);
 			cout.precision(1);
            cout<<sqrt(p*(p-a)*(p-b)*(p-c))<<endl; 
		}
	}
	return 0;
}