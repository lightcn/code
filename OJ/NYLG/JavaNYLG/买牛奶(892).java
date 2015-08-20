/**
 * ÂòÅ£ÄÌ(892).java
 * Created with Ecilpse.
 * User: zhiliang
 * Date: 13-11-4
 * Time:     21:58
 */
import java.io.BufferedInputStream;
import java.util.ArrayList;
import java.util.Scanner;

public class Main 
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(new BufferedInputStream(System.in));
		ArrayList<String> arr = new ArrayList<String>();
		int t = in.nextInt();
		for (int ix = 0; ix < t; ++ix)
		{
			int n = in.nextInt();
			boolean flag = false;
			double price = 0;
			
			String name = null;
			double p;
			int ml;
			for (int i = 0; i < n; ++i)
			{
				name = in.next();
				p = in.nextDouble();
				ml = in.nextInt();
				if ( (p <= 5) && (p >= 1.5) && (ml <= 300))
				{
					flag = true;
					price += p;
					arr.add(name);
				}
			}
			if (flag)
			{
				for (int i = 0; i < arr.size(); ++i)
					System.out.println(arr.get(i));
				System.out.println(String.format("%.1f", price));
			}
			else
				System.out.println("-1");
			arr.clear();
		}
		in.close();
	}
}
