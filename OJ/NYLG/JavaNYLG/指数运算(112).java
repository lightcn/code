/**
 * Created with IntelliJ IDEA.
 * User: zhiliang
 * Date: 13-6-27
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
           // BigInteger N = BigInteger.valueOf(n);
            System.out.println(X.pow(n));
        }

        cin.close();
     }
}