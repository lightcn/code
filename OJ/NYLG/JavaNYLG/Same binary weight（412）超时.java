/**
 * Created with Ecplise.
 * User: zhiliang
 * Date: 13-7-16
 * Time:      21:43
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
			String s = Integer.toBinaryString(n);
			int cnt1 = 0;
			for (int i = 0; i < s.length(); i++)
			{
				if (s.charAt(i) == '1')
					++cnt1;
			}
		
			for (int i = n + 1;; i++)
			{
				int cnt2 = 0;    //cnt2要在内部赋值，刚才就是在外部赋值，造成不可理解的情况
				String str = Integer.toBinaryString(i);
				for (int j = 0; j < str.length(); j++)
				{
					if (str.charAt(j) == '1')
						++cnt2;					
				}
				
				if (cnt2 == cnt1)
				{					
					System.out.println(i);
					break;
				}				
			}
			
		}		
		in.close();
	}
}
