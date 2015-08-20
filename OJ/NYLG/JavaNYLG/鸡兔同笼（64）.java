package zhi.liang;

/**
 * Created with Ecplise.
 * User: zhiliang
 * Date: 13-7-11
 * Time:      12:39
 */

import java.util.Scanner;

public class Main
{
    public static void main (String args[]) throws Exception
    {
        Scanner cin = new Scanner(System.in);

        int t = cin.nextInt();

        for (int i = 0; i < t; i++)
        {
        	int n = cin.nextInt();
        	int m = cin.nextInt();
        	int a, b;
        	a = (4*n - m)/2;
        	b = n - a;
        	if (m % 2 == 1 || a < 0 || b < 0)
        	{
        		System.out.println("No answer");
        	}
        	else
        	{
        		System.out.println(a + " " + b);
        	}
        }
        cin.close();
    }
       
}

