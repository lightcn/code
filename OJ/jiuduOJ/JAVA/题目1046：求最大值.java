/**
 * 题目1046：求最大值.java
 * Created with Ecilpse.
 * User: zhiliang
 * Date: 13-8-5
 * Time:     11:32
 */

import java.util.*;
public class Main
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		while (in.hasNext())
		{
			int [] arr = new int[10];
			for (int i = 0; i < 10; ++i)
			{
				arr[i] = in.nextInt();
				if (i > 0)
				{
					if (arr[i] < arr[i-1])
					{
						arr[i] = arr[i-1];
					}
				}
			}
			System.out.println("max=" + arr[9]);
		}
		
		in.close();
	}

}
