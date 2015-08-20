/**
 * Created with IntelliJ IDEA.
 * User: zhiliang
 * Date: 13-7-5
 * Time:     13:01
 * To change this template use File | Settings | File Templates.
 */

import java.math.BigDecimal;
import java.util.Scanner;

public class Main
{
    public static void main (String args[])   throws Exception
    {
        Scanner cin = new Scanner(System.in);
        BigDecimal A, B;
        while (cin.hasNext())
        {
            double a = cin.nextDouble();
            double b = cin.nextDouble();
            A = BigDecimal.valueOf(a);
            B = BigDecimal.valueOf(b);
            String str = (A.add(B)).toString();

            int cnt = 0;
            for (int i = str.length() - 1; i >= 0; i--)
            {
                if (str.charAt(i) == '0')
                    cnt++;
                else
                    break;
            }
            String str1 = str.substring(0, str.length() - cnt);
            if (str1.charAt(str1.length() - 1) == '.')
                System.out.println(str1.substring(0, str1.length() - 1));
            else
                System.out.println(str1);

        }
        cin.close();
     }
}