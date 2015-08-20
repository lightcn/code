/**
 * 题目1190：大整数排序.java
 * Created with Ecilpse.
 * User: zhiliang
 * Date: 13-9-11
 * Time:     23:12
 */

import java.math.BigInteger;
import java.util.*;
public class Main
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		while (in.hasNext())
		{
			int n = in.nextInt();
			BigInteger [] arr = new BigInteger[n];
			for (int i = 0; i < n; ++i)
				arr[i] = in.nextBigInteger();
			Arrays.sort(arr);
			for (int i = 0; i < n; ++i)
				System.out.println(arr[i]);		
		}
		in.close();
	}
}
