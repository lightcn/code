/**
 * K½øÖÆ(882).java
 * Created with Ecilpse.
 * User: zhiliang
 * Date: 13-11-7
 * Time:     11:09
 */
import java.io.BufferedInputStream;
import java.util.Scanner;

public class Main 
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(new BufferedInputStream(System.in));
		
		int t = in.nextInt();
		for (int ix = 0; ix < t; ++ix)
		{
			int n = in.nextInt();
			int r = in.nextInt();
			System.out.println(Integer.toString(n, r));
		}
		in.close();
	}
}
