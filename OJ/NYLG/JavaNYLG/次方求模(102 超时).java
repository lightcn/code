/**
 * Created with IntelliJ IDEA.
 * User: zhiliang
 * Date: 13-6-29
 * Time:     18:54
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
        for (int i = 0; i < t; i++)
        {
            int a = cin.nextInt();
            int b = cin.nextInt();
            int c = cin.nextInt();
            BigInteger A = BigInteger.valueOf(a);

            BigInteger C = BigInteger.valueOf(c);

            System.out.println(A.pow(b).mod(C));
        }
        cin.close();
     }
}