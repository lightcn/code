/**
 * 动物统计(286).cpp
 *
 * Time : 2013-11-7 21:34
 *
 * Created with Qt Creator
 *
 * Copyright 2013 zhiliang <zhiliang@ubuntu>
 */
#include <cstdio>
#include <cstring>
#include <list>
using std::list;

class Animal
{
public:
    char name[11];
    int number;
} m;

int main()
{
   int n;
   scanf("%d", &n);
   m.number = 1;
   list<Animal> l;
   list<Animal>::iterator it;
   for (int i = 0; i< n; ++i)
   {
       Animal t;
       if (i == 0)
       {
           scanf("%s", t.name);
           strcpy(m.name, t.name);
           t.number = 1;
           l.push_back(t);
       }
       else
       {
           scanf("%s", t.name);
           bool flag = true;
           for (it = l.begin(); it != l.end(); ++it)
           {
               if (strcmp((*it).name, t.name) == 0)
               {
                   flag = false;
                   (*it).number++;
                   if ((*it).number > m.number)
                   {
                       m.number = (*it).number;
                       strcpy(m.name, (*it).name);
                   }
               }
               if (flag == false)
                  break;
           }
           if (flag)
           {
               t.number = 1;
               l.push_back(t);
           }
       }
   }
   printf("%s %d\n", m.name, m.number);
   return 0;
}

