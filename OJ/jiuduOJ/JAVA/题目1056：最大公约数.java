/**
 * 题目1056：最大公约数.java
 * Created with Ecilpse.
 * User: zhiliang
 * Date: 13-11-23
 * Time:     23:02
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
			int a = in.nextInt();
			int b = in.nextInt();
			System.out.println(Main.gcd(a, b));
		}
		
		in.close();
	}
	public static int gcd(int a, int b)
	{
		if (a < b)
		{
			int temp = a;
			a = b;
			b = temp;
		}
		while (true)
		{
			int temp = b;
			if (a % b == 0)
				return b;
			else
				b = a % b;
			a = temp;		
		}
	}
}
