#include <cstdio>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> id;
    vector<string> name;
    vector<short> grade;
    int id_i;
    string name_s;
    short grade_i;
    int case = 1;
    int n, c;

    while (scanf("%d%d", &n, &c) == 2)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> id_i >> name_s >> grade_i;
            id.push_back(id_i);
            name.push_back(name_s);
            grade.push_back(grade_i);
        }

        printf("Case %d:", case++);
    }
}
