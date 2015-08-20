/**
 * 16进制的简单运算(53).java
 * Created with Ecplise.
 * User: zhiliang
 * Date: 13-8-11
 * Time:      22:03
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
			String s = in.next();
			String [] tokens = s.split("[+-]");
			boolean flag = false;
			for (int j = 0; j < s.length(); ++j)
			{
				if (s.charAt(j) == '+')
				{
					flag = true;
					break;
				}
			}
			if (flag)
			{
				int n1 = Integer.parseInt(tokens[0], 16);
				int n2 = Integer.parseInt(tokens[1], 16);
				n1 += n2;
				String st = Integer.toString(n1, 8);
				System.out.println(st);
			}
			else
			{
				int n1 = Integer.parseInt(tokens[0], 16);
				int n2 = Integer.parseInt(tokens[1], 16);
				n1 -= n2;
				String st = Integer.toString(n1, 8);
				System.out.println(st);
			}
		}		
		in.close();
	}
}
