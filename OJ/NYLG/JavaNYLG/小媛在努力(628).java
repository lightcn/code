/**
 * Ğ¡æÂÔÚÅ¬Á¦(628).java
 * Created with Ecplise.
 * User: zhiliang
 * Date: 14-3-22
 * Time:      12:47
 * URL:http://acm.nyist.net/JudgeOnline/problem.php?pid=628
 */

import java.io.BufferedInputStream;
import java.util.Scanner;


public class Main 
{
	public static Scanner in = new Scanner(new BufferedInputStream(System.in));
	public static void main(String[] args) 
	{
		
		int t = in.nextInt();
		String s = in.nextLine();
		for (int ix = 0; ix < t; ++ix)
		{
			s = in.nextLine();
			String [] arr = s.split(" ");
			int count = 1;
			for (int i = 1; i < arr.length - 1; ++i)
			{
				if (arr[i].equals(arr[i+1]))
					count++;
				else 
				{
					System.out.print(count + " " + arr[i] + " ");
					count = 1;
				}
			}
			System.out.println(count + " " + arr[arr.length-1]);
		}
		
	}
}