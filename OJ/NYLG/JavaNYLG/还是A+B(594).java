/**
 * »¹ÊÇA+B	(594).java
 * Created with Ecplise.
 * User: zhiliang
 * Date: 13-12-28
 * Time:      13:00
 */

import java.io.BufferedInputStream;
import java.util.Scanner;

public class Main 
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(new BufferedInputStream(System.in));
		while (in.hasNext())
		{
			String str = in.nextLine();
			StringBuffer s1 = new StringBuffer();
			String[] tokens = str.split(" ");
			int i = 0;
			for (; ; ++i)
			{
				if (!tokens[i].equals("+"))
					s1.append(f(tokens[i]));
				else
					break;
			}
			i++;
			int a = Integer.parseInt(s1.toString());
			
			StringBuffer s2 = new StringBuffer();
			for (; ; ++i)
			{
				if (!tokens[i].equals("="))
					s2.append(f(tokens[i]));
				else
					break;
			}
			int b = Integer.parseInt(s2.toString());
			
			System.out.println(a + b);
		}
		in.close();	
	}
	public static char f(String token)
	{
		if (token.equals("one"))
			return '1';
		else if(token.equals("two"))
			return '2';
		else if (token.equals("three"))
			return '3';
		else if (token.equals("four"))
			return '4';
		else if (token.equals("five"))
			return '5';
		else if (token.equals("six"))
			return '6';
		else if (token.equals("seven"))
			return '7';
		else if (token.equals("eight"))
			return '8';
		else if (token.equals("nine"))
			return '9';
		else
			return '0';
	}
}