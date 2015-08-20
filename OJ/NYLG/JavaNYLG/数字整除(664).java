/**
 * Êý×ÖÕû³ý(664).java
 * Created with Ecplise.
 * User: zhiliang
 * Date: 13-8-20
 * Time:      19:25
 */

import java.util.*;
import java.math.*;

public class Main 
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		while (in.hasNext())
		{
			String str = in.next();	
			if (str.equals("0"))
				break;
			BigInteger a = new BigInteger(str.substring(0, str.length()-1));
			BigInteger b = new BigInteger(str.substring(str.length()-1, str.length()));
			BigInteger c = BigInteger.valueOf(5);
			
			a = a.subtract(b.multiply(c));
			
			c = BigInteger.valueOf(17);
			b = BigInteger.valueOf(0);
			if (a.mod(c).equals(b))
			{
				System.out.println("1");
			}
			else
			{
				System.out.println("0");
			}
		}
		in.close();	
	}
}