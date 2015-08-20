/**
 * Created with Ecplise.
 * User: zhiliang
 * Date: 13-7-21
 * Time:     22:27
 * To change this template use File | Settings | File Templates.
 */

import java.util.*;
public class Main
{

	/**
	 * @param args
	 */
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		while (n-- > 0)
		{
			int num = in.nextInt();
			int [] arr = new int[num];
			for (int i = 0; i < num; i++)
			{
				arr[i] = in.nextInt();
			}
			Arrays.sort(arr);
			System.out.println(arr[num/2]);
		}
		// TODO Auto-generated method stub
		in.close();
	}

}
