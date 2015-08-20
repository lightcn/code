/**
 * 题目1015：还是A+B.java
 * Created with Ecilpse.
 * User: zhiliang
 * Date: 13-8-6
 * Time:     10:52
 */

import java.util.*;
public class Main
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		while (in.hasNext())
		{
			String s1 = in.next();
			String s2 = in.next();
			int k = in.nextInt();
			if (s1.equals("0") && s2.equals("0"))
				break;
			if (s1.length() < k && s2.length() < k)
			{
				if (s1.length() == s2.length())
				{
					if (s1.equals(s2))
					{
						System.out.println("-1");
					}
					else
					{
						int a = Integer.parseInt(s1);
						int b = Integer.parseInt(s2);
						System.out.println(a + b);
					}					
				}
				else
				{
					int a = Integer.parseInt(s1);
					int b = Integer.parseInt(s2);
					System.out.println(a + b);
				}
			}
			else if (s2.length() < k && s1.length() >= k)
			{
				int lenth = s1.length() - s2.length();
				String s = s1.substring(lenth, s1.length());
				if (s2.equals(s))
					System.out.println("-1");	
				else 
				{
					int a = Integer.parseInt(s1);
					int b = Integer.parseInt(s2);
					System.out.println(a + b);
				}
			}
			else if (s1.length() < k && s2.length() >= k)
			{
				int lenth = s2.length() - s1.length();
				String s = s2.substring(lenth, s2.length());
				if (s1.equals(s))
						System.out.println("-1");
				else 
				{
					int a = Integer.parseInt(s1);
					int b = Integer.parseInt(s2);
					System.out.println(a + b);
				}
			}
			else if (s1.length() >= k && s2.length() >= k)
			{
				if (k == 0)
				{
					int a = Integer.parseInt(s1);
					int b = Integer.parseInt(s2);
					System.out.println(a + b);
				}	
				else
				{
					String str1 = s1.substring(s1.length() - k, s1.length());
					String str2 = s2.substring(s2.length() - k, s2.length());
					if (str1.equals(str2))
						System.out.println("-1");
					else
					{
						int a = Integer.parseInt(s1);
						int b = Integer.parseInt(s2);
						System.out.println(a + b);
					}
				}						
			}
		}
		in.close();
	}
}
