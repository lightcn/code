/**
 * 不高兴的小明(53).java
 * Created with Ecplise.
 * User: zhiliang
 * Date: 13-8-11
 * Time:      21:43
 */

import java.util.*;

public class Main 
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		while (n-- > 0)
		{
			boolean flag = true;
			int [] a = new int[8];
			int [] b = new int[8];
			int [] c = new int[7];
			int [] d = new int[7];
			int j = 0;
			for (int i = 1; i <= 7; ++i)
			{
				a[i] = in.nextInt();
				b[i] = in.nextInt();
				if (a[i] + b[i] > 8)
				{
					flag = false;
					c[j] = i;
					d[j] = a[i] + b[i];
					++j;
				}
			}
			if (flag)
			{
				System.out.println("0");
			}
			else
			{
				int tag = 0;
				for (int i = 6; i >= 0; --i)
				{
					if (d[i] != 0)
					{
						tag = i;
						break;
					}				
				}
				boolean f = false;
				for (int i = tag; i >= 1; --i)
				{
					if (d[i] != d[i-1])
					{
						f = true;
						break;
					}
				}
				if (f)
				{
					for (j = 0; j < tag; ++j)
					{
						if (d[j] >= d[j+1])
						{
							d[j+1] = d[j];
							c[j+1] = c[j];
						}
					}
					System.out.println(c[tag]);
				}
				else
				{
					System.out.println(c[0]);
				}
			}
			
		}		
		in.close();
	}
}
