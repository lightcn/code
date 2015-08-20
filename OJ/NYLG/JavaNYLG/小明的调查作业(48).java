/**
 * Created with Ecilpse.
 * User: zhiliang
 * Date: 13-7-29
 * Time:     15:03
 * To change this template use File | Settings | File Templates.
 */

import java.util.*;
public class Main
{

	/**
	 * @param args
	 */
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		
		while (in.hasNext())
		{
			int n = in.nextInt();
			
			int [] arr = new int[n];
			for (int i = 0; i < n; i++)
			{
				arr[i] = in.nextInt();
			}
			Arrays.sort(arr);
			
			int [] a = new int[n];
			int j = 0;
			for (int i = 0; i < n; i++)
			{
				if (i == 0)
				{
					a[j] = arr[i];
					j++;
				}
				else if(arr[i] != arr[i-1])
				{
					a[j] = arr[i];
					j++;
				}
			}
	
			int cnt = 0;
			for (int i = 0; i < a.length; i++)
			{
				if (a[i] != 0)
					cnt++;
			}
			System.out.println(cnt);
			for (int i = 0; i < cnt; i++)
			{
				System.out.print(a[i] + " ");
			}
			System.out.println();
		}
		// TODO Auto-generated method stub
		in.close();
	}

}
