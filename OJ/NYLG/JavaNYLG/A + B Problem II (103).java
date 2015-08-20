/**
 * Created with IntelliJ IDEA.
 * User: zhiliang
 * Date: 13-6-27
 * Time:     13:21
 * To change this template use File | Settings | File Templates.
 */

import java.math.BigInteger;
import java.util.Scanner;

public class Main
{
    public static void main (String args[]) throws Exception
    {
        Scanner cin = new Scanner(System.in);

        int t = cin.nextInt();
        for (int i = 1; i <= t; i++)
        {
            String str1 = cin.next();
            String str2 = cin.next();
            BigInteger N = new BigInteger(str1);
            BigInteger M = new BigInteger(str2);

            BigInteger sum = N.add(M);
            System.out.println("Case " + i + ":");
            System.out.print(str1);
            System.out.print(" + ");
            System.out.print(str2);
            System.out.print(" = ");
            System.out.println(sum);
        }
        cin.close();
     }
}