#include <iostream>
using namespace std;

int main(void)

{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int year;
		int month;
		int day;
		int leap;
		int count;
		int sum;
		cin >> year >> month >> day;
		if (((year % 400) == 0) || ((year % 4) == 0) && (year % 100 != 0))
			leap = 1;
		else
			leap = 0;
		switch (month)
		{
			case 1:
				count = 0;
				break;
			case 2:
				count = 31;
				break;
			case 3:
				count = 59;
				break;
			case 4:
				count = 90;
				break;
			case 5:
				count = 120;
				break;
			case 6:
				count = 151;
				break;
			case 7:
				count = 181;
				break;
			case 8:
				count = 212;
				break;
			case 9:
				count = 243;
				break;
			case 10:
				count = 273;
				break;
			case 11:
				count = 304;
				break;
			case 12:
				count = 334;
				break;
			default:
				break; 		
		}
		
		if (month > 2)
			sum = count + leap + day;
		else 
			sum = count + day;
		cout << sum <<"\n";	
	}
	return 0;
} 