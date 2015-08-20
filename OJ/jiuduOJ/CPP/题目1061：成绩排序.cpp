/**
 * 题目1061：成绩排序.cpp
 *
 * Time : 2013-10-18 10:18
 *
 * Created with Dev—CPP 
 *
 * Copyright 2013 zhiliang
 */
 
#include <iostream>
#include <string>
#include <cstdio> 
using namespace std;

class student
{
public:
	string name;
	int age;
	int score;
}*stuarr;

int main(void)
{
	int n;
	while (cin >> n)
	{
		stuarr = new student[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> stuarr[i].name;
			scanf("%d%d", &stuarr[i].age, &stuarr[i].score);
		}
		for (int i = 0; i < n - 1; ++i)
		{
			bool flag = true;
			for (int j = n - 1; j >= i; --j) 
			{
				int tag = 0;
				
				// 比较成绩 
				if (stuarr[j].score < stuarr[j-1].score)
				{
					student temp = stuarr[j];
					stuarr[j] = stuarr[j-1];
					stuarr[j-1] = temp;
					tag = 1;
					flag = false;
				}
				
				// 比较姓名 
				if (1 == tag || (stuarr[j].score > stuarr[j-1].score))
					continue;
				else
				{
					if (stuarr[j].name < stuarr[j-1].name)
					{
						student temp = stuarr[j];
						stuarr[j] = stuarr[j-1];
						stuarr[j-1] = temp;
						tag = 2;
						flag = false;
					}
				}
				
				
				// 比较年龄 
				if (2 == tag || stuarr[j].name > stuarr[j-1].name)
					continue;
				else
				{
					if (stuarr[j].age < stuarr[j-1].age)
					{
						student temp = stuarr[j];
						stuarr[j] = stuarr[j-1];
						stuarr[j-1] = temp;
						flag = false;
					}
				}
			}
			if (flag)
				break;
		}
		for (int i = 0; i < n; ++i)
		{
			cout << stuarr[i].name;
			printf(" %d ", stuarr[i].age);
			printf("%d\n", stuarr[i].score);
		}
			
		delete [] stuarr;
		stuarr = NULL;
	}
	return 0;
}