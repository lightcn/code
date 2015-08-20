import java.util.Scanner;

public class Main
{
    public static void main (String args[]) throws Exception
    {
        Scanner cin = new Scanner(System.in);
        int n = cin.nextInt();
           for (int i = 0; i < n; i++)
           {
               int num = cin.nextInt();
               if (num >= 90 && num <= 100)
               {
                   System.out.println("A");
               }
               else if (num >= 80 && num <= 89)
               {
                     System.out.println("B");
               }
               else if(num >= 70 && num <= 79)
               {
                    System.out.println("C");
               }
               else if (num >= 60 && num <= 69)
               {
                    System.out.println("D");
               }
               else if (num >= 0 && num <= 59)
              {
                    System.out.println("E");
              }
           }
    }
}