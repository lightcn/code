/**
 * Ã‚ƒø1202£∫≈≈–Ú.java
 * Created with Ecilpse.
 * User: zhiliang
 * Date: 13-10-24
 * Time:     23:12
 */

import java.io.BufferedInputStream;
import java.util.*;
public class Main
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(new BufferedInputStream(System.in));
		while (in.hasNext())
		{
			int n = in.nextInt();
			int[] arr = new int[n];
			for (int i = 0; i < n; ++i)
				arr[i] = in.nextInt();
			Arrays.sort(arr);
			for (int i = 0; i < n; ++i)
				System.out.print(arr[i] + " ");
			System.out.println();
		}
		in.close();
	}
	
}
