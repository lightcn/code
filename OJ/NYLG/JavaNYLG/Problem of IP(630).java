/**
 * Created with IntelliJ IDEA.
 * User: zhiliang
 * Date: 13-6-23
 * Time:     ÕÌ…œ 22£∫27
 * To change this template use File | Settings | File Templates.
 */

import java.util.Scanner;

public class Main
{
    public static void main (String args[]) throws Exception
    {
        Scanner cin = new Scanner(System.in);


        while (cin.hasNext())
        {
           // cin.useDelimiter(".");

            String str = cin.nextLine();
            if (str.length() == 32)
            {
                int num1 = Integer.parseInt(str.substring(0, 8), 2);
                int num2 = Integer.parseInt(str.substring(8, 16), 2);
                int num3 = Integer.parseInt(str.substring(16, 24), 2);
                int num4 = Integer.parseInt(str.substring(24, 32), 2);
                System.out.println(num1 + "." + num2 + "." + num3 + "." + num4);
            }
            else
            {
                int count1 = 0;
                for (int i = 0; i < str.length(); i++)
                {
                    if (str.charAt(i) != '.')
                        count1++;
                    else
                        break;

                }
                int a = count1;
                int num1 = Integer.parseInt(str.substring(0, a));

                int count2 = a+1;
                for (int i = a+1; i < str.length(); i++)
                {
                    if (str.charAt(i) != '.')
                        count2++;
                    else
                        break;
                }
                int b = count2;
                int num2 = Integer.parseInt(str.substring(a+1, b));

                int count3 = b+1;
                for (int i = b+1; i < str.length(); i++)
                {
                    if (str.charAt(i) != '.')
                        count3++;
                    else
                        break;

                }
                int c = count3;
                int num3 = Integer.parseInt(str.substring(b+1, c));


                int num4 = Integer.parseInt(str.substring(c+1, str.length()));

                String str1 = Integer.toBinaryString(num1);
                String str2 = Integer.toBinaryString(num2);
                String str3 = Integer.toBinaryString(num3);
                String str4 = Integer.toBinaryString(num4);

                String s = "0";
                while (str1.length() != 8)
                {
                    str1 = s + str1;
                }

                while (str2.length() != 8)
                {
                    str2 = s + str2;
                }

                while (str3.length() != 8)
                {
                    str3 = s + str3;
                }

                while (str4.length() != 8)
                {
                    str4 = s + str4;
                }

                System.out.println(str1 + str2 + str3 + str4);
            }

        }
        cin.close();
     }
}