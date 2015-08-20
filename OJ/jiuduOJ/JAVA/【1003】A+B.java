package zhi.liang;

/**
 * Created with Ecplise.
 * User: zhiliang
 * Date: 13-7-13
 * Time:      13:49
 */

import java.util.Scanner;

public class Main
{
    public static void main (String args[]) throws Exception
    {
    	Scanner in = new Scanner(System.in);
    	while (in.hasNext())
    	{
    		String s1 = in.next();
            String s2 = in.next();
            String [] token1 = s1.split(",");
            String [] token2 = s2.split(",");
            String s3 = "", s4 = "";
            for (int i = 0; i < token1.length; i++)
            {
            	s3 += token1[i];
            }
            
            for (int i = 0; i < token2.length; i++)
            {
            	s4 += token2[i];
            }
            
            int sum = Integer.parseInt(s3) + Integer.parseInt(s4);
            System.out.println(sum); 
    	}
    	in.close();
    }
}


