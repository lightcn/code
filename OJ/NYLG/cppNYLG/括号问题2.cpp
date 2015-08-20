#include <iostream>
class stack
{
   private:
      int counter;
      char *pt,*begin;
   public:
      stack()
      {
         counter = 0;          // 标记栈里的元素多少；
         begin = pt = new char [10000];      //在堆里给栈分配10000字节的空间；
 
      }
      ~stack()
      {
         delete [] begin;         //析构函数；
      }
      bool pop(char c)            //入栈；
      {
         if(counter<10000)
         {
           
            pt++;
            *pt=c;
            counter ++;
            return true;
         }
         else
            return false;
      }
      bool push(char &c)          //出栈，注意用的是引用类型；
      {
         if(counter)
         {
            c=*pt;
            pt--;
            counter--;
            return true;
         }
         else
            return false;
      }
      int getcounter()         //取得当前栈里的元素多少；
      {
         return counter;
      }
 
 
};
int main()
{
   using namespace std;
   int count,i;
   char* org[100];             //定义最大存储字符串的大小，这里是100个；
   cin >> count;
   for(i=0;i<count;i++)
   {
      org[i]=new char [10000];
     
   }                        //给字符串分配空间，大小为10000字节；
   cin.get();
   for(i=0 ;i < count ; i++)
   {
      cin.getline(org[i],10000);
   }                        //输入字符串；
   for(i=0 ; i < count ; i++)
   {
      stack st;             //实例化一个栈；
      char *porg=org[i];      
      if(*porg==')' || *porg==']')
      {
         cout<<"No"<<endl;
         continue;
      }                     //如果第一个字符为']'或')'，那么肯定不符合要求。直接输出"NO"；
      else
      {
         char tem = ' ';       //初始化中间变量为空格，其实只要不为括号就可以了，可任选；
         while(*porg)
         {
           
            if(st.getcounter())     
            {
                st.push(tem);   //取得栈顶的字符；
                st.pop(tem); //再入栈，注意：这里只是为了取得栈顶的元素，不是为了出栈；
            }
            if((*porg==')' && tem =='(') || (*porg== ']' && tem == '[') ) //将栈顶的元素和即将入栈的元素比较；
            {
                st.push(tem);         //如果匹配，那么出栈，并且即将入栈的字符也不入栈；
                porg++;
                tem=' ';
            }
            else
            {
                st.pop(*porg);     //如果不匹配，那么入栈，指针加1；
                porg++;
            }
         }
         if(!st.getcounter())     //如果最后栈里没有元素，说明完全匹配，输出"YES"，否者输出"NO"；
            cout<<"Yes"<<endl;
         else cout<<"No"<<endl;
      } 
     
   }
   for(i=0;i<count;i++)           //释放内存
   {
      delete [] org[i];
     
   }
   return 0;
}