//��Ŀ50 
//δacԭ�����û�л��� 
#include <iostream>
using namespace std;

int main(void)
{
	int t;
	cin >> t;
	if (t <= 0 || t >= 100)
	 	return 0;
	while (t--)
	{
		int a[10];
		for (int i = 0; i < 10; i++)
		{
			cin >> a[i];
			if (a[i] > 200 || a[i] < 100)
				return 0;
		}
		int high;
		cin >> high;
		int count = 0;
		for (int j = 0; j < 10; j++)
			if ((high + 30) >= a[j])
				count++;
		cout << count << endl;  //�мǣ��������һ��Ҫ���� 
	}
	return 0;
}