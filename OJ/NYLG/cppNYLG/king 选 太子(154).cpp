// 2013-7-3 0:02
#include <cstdio>

void Build_Max_Heap(int array_list[], const int array_size, const int index);  
bool HeapSort(int array_list[], const int array_size); 
 
int main()  
{  
   	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		int *a = new int[n];
	
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}								
		HeapSort(a, n);

		printf("%d\n", a[n/2]);      
		delete [] a;					
	}
	return 0;
}  
bool HeapSort(int array_list[], const int array_size)  
{  
    if(array_size < 0)  
    {  
        return false;  
    }  
    for(int i=0;i<array_size;i++)  
    {  
        for(int j = ((array_size - i)/2-1);j>=0;j--)  
        {  
            Build_Max_Heap(array_list,array_size - i,j);  
        }  
        int tmp = array_list[0];  
        array_list[0] = array_list[array_size -1 - i];  
        array_list[array_size -1 - i] = tmp;  
    }  
    return true;  
}  
/*���������*/  
void Build_Max_Heap(int array_list[], const int array_size, const int index)  
{  
    int left_index = 2*index + 1;  
    int right_index = 2*index + 2;  
    int largest = index;  
    if((right_index < array_size) )  
    {/*�ڽ��������ʱ��������ڵ�������ӽڵ㶼С���򽻻�����һ���ӽڵ�*/  
          if((array_list[left_index] < array_list[right_index]))  
        {  
            largest = right_index;  
        }  
        else  
       {  
            largest = left_index;  
        }  
    }  
    else  
    {  
        if(left_index < array_size)  
        {  
            largest = left_index;  
        }  
    }  
    if((array_list[index] < array_list[largest]) && (largest != index))  
    {  
        int tmp = array_list[index];  
        array_list[index] = array_list[largest];  
        array_list[largest] = tmp;  
        /*���������ĳ���ڵ��ֵ������Ҫ�ݹ齻���������Ľڵ�*/  
        Build_Max_Heap(array_list, array_size, largest);  
    }  
}  
