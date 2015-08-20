#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[7], b[7];
        int count = 0;
        for (int i = 0; i < 7; i++)
        {
            cin >> a[i] >>b[i];
            b[i] += a[i];
        }
        for (int j = 0; j < 7; j++)
        {
            if (b[j] > 8)
            {
                cout << j+1 <<endl;
                break;
            }
        }
        for (int k = 0; k < 7; k++)
        {
        	if (b[k] <= 8) 
			{
	        	count++;	
	        }
	        if (count == 6)
	        	cout << '0' <<endl;
        }
    }
    return 0;
}
