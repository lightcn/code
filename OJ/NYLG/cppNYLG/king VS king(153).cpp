#include <cstdio>
void Build_Max_Heap(int array_list[], const int array_size, const int index);  
bool HeapSort(int array_list[], const int array_size); 
 
int main(void)
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		int cntx(0);
		int cnty(0);
		scanf("%d", &n);
		int *x = new int[n];
		int *y = new int[n];
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &x[i]);
		}
			
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &y[i]);
		}
			
		HeapSort(x, n);
		HeapSort(y, n);
		for (int i = 0; i < n; i++)
		{
			if (x[i] > y [i])
			{
				cntx+=2;
			}
			else if (x[i] < y[i])
			{
				cnty+=2;
			}
			else
			{
				cntx++;
				cnty++;
			}
		}
		if (cntx > cnty)
		{
			printf("X\n");
		}
		else if (cntx < cnty)
		{
			printf("Y\n");
		}
		else
		{
			printf("none\n");
		}
		delete [] x;
		delete [] y;
		
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
/*构建大根堆*/  
void Build_Max_Heap(int array_list[], const int array_size, const int index)  
{  
    int left_index = 2*index + 1;  
    int right_index = 2*index + 2;  
    int largest = index;  
    if((right_index < array_size) )  
    {/*在建立大根堆时，如果父节点比两个子节点都小，则交换最大的一个子节点*/  
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
        /*如果交换了某个节点的值，则需要递归交换其子树的节点*/  
        Build_Max_Heap(array_list, array_size, largest);  
    }  
}  
