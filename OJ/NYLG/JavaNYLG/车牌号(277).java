/**
 * ³µÅÆºÅ	(277).java
 * Created with Ecplise.
 * User: zhiliang
 * Date: 13-8-26
 * Time:      12:16
 */

import java.util.Arrays;
import java.util.Scanner;

public class Main 
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		for (int k = 0; k < t; ++k)
		{
			int m = in.nextInt();
			String [] str = new String[m];
			for (int i = 0; i < m; ++i)
			{
				str[i] = in.next();
			}
			Arrays.sort(str);
			System.out.println(str[0]);
		}
		in.close();	
	}
}