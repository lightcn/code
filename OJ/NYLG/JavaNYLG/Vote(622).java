/**
 * Vote(622).java
 * Created with Ecplise.
 * User: zhiliang
 * Date: 13-8-12
 * Time:      16:38
 */

import java.util.*;

public class Main 
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		while (in.hasNext())
		{
			int n = in.nextInt();
			if (n == 0)
				break;
			int [] arr = new int[n];
			for (int i = 0; i < n; ++i)
			{
				arr[i] = in.nextInt();
			}
			Arrays.sort(arr);
			int sum = 0;
			for (int i = 0; i <= n / 2; ++i)
			{
				sum += (arr[i] / 2) + 1;
			}
			System.out.println(sum);
		}
		in.close();
	}
}
