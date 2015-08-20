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
            int i = cin.nextInt();
        for (int j = 1; j <= i; j++)
        {
            int a, b, c;
            a = cin.nextInt();
            b = cin.nextInt();
            c = cin.nextInt();
            if ((a+b) > c && (a+c) > b && (b+c) > a && (a-b) < c && (a-c) < b && (b-c) < a)
            {
                System.out.println("Case #"+j+":");
                System.out.print("YE ");
                if (a == b || a == c || b == c)
                     System.out.print("YE ");
                else
                    System.out.println();
                if (a == b && a == c)
                     System.out.println("YE");
                else
                    System.out.println();

            }
            else
            {
                    System.out.println("Case #"+j+":");
                    System.out.println("NO");
            }
        }
    }

}