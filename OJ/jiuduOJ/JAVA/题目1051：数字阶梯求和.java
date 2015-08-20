/**
 * 题目1051：数字阶梯求和.java
 * Created with Ecilpse.
 * User: zhiliang
 * Date: 13-11-23
 * Time:     23:27
 */
import java.io.BufferedInputStream;
import java.math.BigInteger;
import java.util.Scanner;

public class Main 
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(new BufferedInputStream(System.in));
		while (in.hasNext())
		{
			int a = in.nextInt();
			int n = in.nextInt();
			
			BigInteger sum = new BigInteger("0");
			for (int i = 1; i <= n; i++)
			{
				StringBuffer str = new StringBuffer(n);
				for (int j = 0; j < i; ++j)
					str.append(a);
				sum = sum.add(new BigInteger(str.toString()));
			}
			System.out.println(sum);
		}
		
		in.close();
	}	
}
