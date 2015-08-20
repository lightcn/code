/**
 * 求高精度幂(155).java
 * Created with Ecilpse.
 * User: zhiliang
 * Date: 13-10-30
 * Time:     23:18
 */

import java.io.BufferedInputStream;
import java.math.BigDecimal;
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(new BufferedInputStream(System.in));
		while (in.hasNext())
		{
			BigDecimal n1 = in.nextBigDecimal();
			int n2 = in.nextInt();
			if (n2 == 0)
			{
				System.out.println(1);
			}
			else
			{
				BigDecimal n = n1.pow(n2);
				if (n.compareTo(BigDecimal.ONE) >= 0)
					System.out.println(n.stripTrailingZeros().toPlainString());
				else
				{
					String str = n.toPlainString();
					System.out.println(str.substring(1));
				}
			}
		}
		in.close();
	}
}
