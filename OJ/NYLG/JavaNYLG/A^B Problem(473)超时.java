/**
 * Created with IntelliJ IDEA.
 * User: zhiliang
 * Date: 13-6-29
 * Time:     13:33
 * To change this template use File | Settings | File Templates.
 */

import java.math.BigInteger;
import java.util.Scanner;

public class Main
{
    public static void main (String args[]) throws Exception
    {
        Scanner cin = new Scanner(System.in);
        while (cin.hasNext())
        {
            int x = cin.nextInt();
            int n = cin.nextInt();

            BigInteger X = BigInteger.valueOf(x);
            BigInteger N = X.pow(n);
            String str = N.toString();
            System.out.println(str.charAt(str.length()-1));
        }

        cin.close();
     }
}