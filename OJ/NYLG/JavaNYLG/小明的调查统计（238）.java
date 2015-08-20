/**
 * Created with Ecilpse.
 * User: zhiliang
 * Date: 13-7-29
 * Time:     22:07
 * To change this template use File | Settings | File Templates.
 */

import java.util.*;
public class Main
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		int [] d = new int[t];

		for (int i = 0; i < t; ++i)
		{
			int sum = in.nextInt();
			int [] arr = new int[sum]; 
			for (int j = 0; j < sum; ++j)
			{
				arr[j] = in.nextInt();
			}
			Arrays.sort(arr);
			d[i] = arr[sum-1] - arr[0];
		}
		for (int i = 0; i < t; ++i)
			System.out.println(d[i]);
		
		in.close();
	}

}
