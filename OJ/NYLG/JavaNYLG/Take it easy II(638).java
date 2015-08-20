/**
 * Take it easy II(638).java
 * Created with Ecplise.
 * User: zhiliang
 * Date: 13-8-15
 * Time:      22:23
 */

import java.util.*;

public class Main 
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		while (in.hasNext())
		{
			int [] arr = new int[5];
			int [] xarr = new int[5];
			int time = 0;
			for (int i = 0; i < 5; ++i)
			{
				arr[i] = in.nextInt();
				time += (5 + (arr[i] * 10));
			}
		
			int sum = 0;
			for (int i = 0; i < 5; ++i)
			{
				xarr[i] = in.nextInt();
				sum += xarr[i];
			}
			if ((sum - time) <= 0)
				System.out.println("No !");
			else
				System.out.println("Yes " + (sum - time));
		}
		in.close();
	}
}
