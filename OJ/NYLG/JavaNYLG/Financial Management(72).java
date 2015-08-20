/**
 * Financial Management(72).java
 * Created with Ecplise.
 * User: zhiliang
 * Date: 13-8-12
 * Time:      16:03
 */

import java.util.*;

public class Main 
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
	//	int n = in.nextInt();
		while (in.hasNext())
		{
			double [] arr = new double[12];
			double sum = 0.00;
			for (int i = 0; i < 12; ++i)
			{
				arr[i] = in.nextDouble();
				sum += arr[i];
			}
			System.out.println(String.format("%.2f", sum / 12));
		}
		in.close();
	}
}
