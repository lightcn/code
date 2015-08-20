/**
 * A-B Problem(524).java
 * Created with Ecilpse.
 * User: zhiliang
 * Date: 13-10-31
 * Time:     23:35
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
            BigDecimal a = in.nextBigDecimal();
           
            BigDecimal b = in.nextBigDecimal();
            
            if (a.compareTo(b) == 0)
            	System.out.println("YES");
            else
            	System.out.println("NO");
		}
		in.close();
	}
}
