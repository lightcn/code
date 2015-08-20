/**
 * ÊıÊıĞ¡Ä¾¿é(260).java
 * Created with Ecplise.
 * User: zhiliang
 * Date: 13-8-11
 * Time:      22:29
 */

import java.util.*;

public class Main 
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		for (int i = 0; i < n; ++i)
		{
			int t = in.nextInt();
			int sum = 0;
			int tag = 0;
			for (int j = 1; j <= t; ++j)
			{
				if (j == 1)
				{
					sum += j;
					tag = j;
				}
				else
				{
					tag += j;
					sum += tag;
				}
			}
			System.out.println(sum);
		}		
		in.close();
	}
}
