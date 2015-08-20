/**
 * 题目1473：二进制数.java
 * Created with Ecilpse.
 * User: zhiliang
 * Date: 13-8-5
 * Time:     12:03
 */

import java.util.*;
public class Main
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		while (t-- > 0)
		{
			int n = in.nextInt();
			String s = Integer.toBinaryString(n);
			System.out.println(s);
		}
		
		in.close();
	}
}
