import java.util.Scanner;

public class Main
{
    public static void main (String args[]) throws Exception
    {
        Scanner cin = new Scanner(System.in);

        int t = cin.nextInt();
        for (int k = 0; k < t; k++)
        {

            int n = cin.nextInt();
            int [] a= new int[n];
            for (int i = 0; i < n; i++)
                a[i] = cin.nextInt();

            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                boolean b = false;
                for (int j = 2; j <= Math.sqrt(a[i]); j++)
                {
                    if (a[i] % j == 0)
                    {
                        b = false;
                        break;
                    }
                    else
                    {
                        b = true;
                    }
                }
                if (b)
                    sum += a[i];
            }
            for (int l = 0; l < n; l++)
            {
                if (a[l] == 2)
                    sum += a[l];
                if (a[l] == 3)
                    sum += a[l];
            }
            System.out.println(sum);
        }
        cin.close();
     }
}