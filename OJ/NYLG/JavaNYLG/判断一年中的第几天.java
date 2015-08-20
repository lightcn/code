//题目 75
// 没有 ac 的原因，没有考虑月份有没有超过二月

import java.util.Scanner;
public class Main
{
    private static Scanner cin;

    /**
     * @param args
     */
    public static void main(String[] args)
    {
        cin = new Scanner(System.in);
        int n = cin.nextInt();
        for (int i = 0; i < n; i++)
        {
            int year = cin.nextInt();
            int month = cin.nextInt();
            int day = cin.nextInt();
            int leap;
            int count = 0;
            int sum;

            if (((year % 400) == 0) || ((year % 4) == 0) && (year % 100 != 0))
                leap = 1;
            else
                leap = 0;
            switch (month)
            {
                case 1:
                    count = 0;
                    break;
                case 2:
                    count = 31;
                    break;
                case 3:
                    count = 59;
                    break;
                case 4:
                    count = 90;
                    break;
                case 5:
                    count = 120;
                    break;
                case 6:
                    count = 151;
                    break;
                case 7:
                    count = 181;
                    break;
                case 8:
                    count = 212;
                    break;
                case 9:
                    count = 243;
                    break;
                case 10:
                    count = 273;
                    break;
                case 11:
                    count = 304;
                    break;
                case 12:
                    count = 334;
                    break;
                default:
                    break;
            }
            if (month > 2)
            {
                sum = count + leap + day;
            }
            else
            {
                sum = count + day;
            }
            System.out.println(sum);
        }

    }

}
