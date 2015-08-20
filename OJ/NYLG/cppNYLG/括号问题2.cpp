#include <iostream>
class stack
{
   private:
      int counter;
      char *pt,*begin;
   public:
      stack()
      {
         counter = 0;          // ���ջ���Ԫ�ض��٣�
         begin = pt = new char [10000];      //�ڶ����ջ����10000�ֽڵĿռ䣻
 
      }
      ~stack()
      {
         delete [] begin;         //����������
      }
      bool pop(char c)            //��ջ��
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
      bool push(char &c)          //��ջ��ע���õ����������ͣ�
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
      int getcounter()         //ȡ�õ�ǰջ���Ԫ�ض��٣�
      {
         return counter;
      }
 
 
};
int main()
{
   using namespace std;
   int count,i;
   char* org[100];             //�������洢�ַ����Ĵ�С��������100����
   cin >> count;
   for(i=0;i<count;i++)
   {
      org[i]=new char [10000];
     
   }                        //���ַ�������ռ䣬��СΪ10000�ֽڣ�
   cin.get();
   for(i=0 ;i < count ; i++)
   {
      cin.getline(org[i],10000);
   }                        //�����ַ�����
   for(i=0 ; i < count ; i++)
   {
      stack st;             //ʵ����һ��ջ��
      char *porg=org[i];      
      if(*porg==')' || *porg==']')
      {
         cout<<"No"<<endl;
         continue;
      }                     //�����һ���ַ�Ϊ']'��')'����ô�϶�������Ҫ��ֱ�����"NO"��
      else
      {
         char tem = ' ';       //��ʼ���м����Ϊ�ո���ʵֻҪ��Ϊ���žͿ����ˣ�����ѡ��
         while(*porg)
         {
           
            if(st.getcounter())     
            {
                st.push(tem);   //ȡ��ջ�����ַ���
                st.pop(tem); //����ջ��ע�⣺����ֻ��Ϊ��ȡ��ջ����Ԫ�أ�����Ϊ�˳�ջ��
            }
            if((*porg==')' && tem =='(') || (*porg== ']' && tem == '[') ) //��ջ����Ԫ�غͼ�����ջ��Ԫ�رȽϣ�
            {
                st.push(tem);         //���ƥ�䣬��ô��ջ�����Ҽ�����ջ���ַ�Ҳ����ջ��
                porg++;
                tem=' ';
            }
            else
            {
                st.pop(*porg);     //�����ƥ�䣬��ô��ջ��ָ���1��
                porg++;
            }
         }
         if(!st.getcounter())     //������ջ��û��Ԫ�أ�˵����ȫƥ�䣬���"YES"���������"NO"��
            cout<<"Yes"<<endl;
         else cout<<"No"<<endl;
      } 
     
   }
   for(i=0;i<count;i++)           //�ͷ��ڴ�
   {
      delete [] org[i];
     
   }
   return 0;
}