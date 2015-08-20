/**
 * Created with IntelliJ IDEA.
 * User: zhiliang
 * Date: 13-6-24
 * Time:     ÕÌ…œ 23:48
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
            int count = 1;
            BigInteger N = BigInteger.valueOf(10);
            BigInteger M = BigInteger.valueOf(1);

            int n = cin.nextInt();
            BigInteger x;
            x = BigInteger.valueOf(n);

            BigInteger y = BigInteger.valueOf(1);

            BigInteger z = BigInteger.valueOf(0);

            BigInteger ans = y.mod(x);
            while (!ans.equals(z))
            {
                y = y.multiply(N);
                y = y.add(M);
                ans = y.mod(x);
                count++;
            }
            System.out.println(count);
        }
        cin.close();
     }
}