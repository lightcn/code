import java.util.Scanner;

public class Main 
{
	public static void main(String args[]) 
	{
		 Scanner cin = new Scanner(System.in);
	     while (cin.hasNext())
	     {
	        String str = cin.nextLine();
	        System.out.println(str.replaceAll("you", "we"));
	     }
		cin.close();

	}
}
