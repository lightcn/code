import java.util.Scanner;

public class Main 
{
	public static void main(String args[]) 
	{
		Scanner cin = new Scanner(System.in);

		int n = cin.nextInt();
		@SuppressWarnings("unused")
		String str = cin.nextLine();

		for (int i = 0; i < n; i++) 
		{
			int count = 0;
			String str1 = cin.nextLine();
			String str2 = cin.nextLine();
			for (int j = 0; j < (str2.length() - str1.length() + 1); j++) 
			{
				if (str1.compareTo(str2.substring(j, j + str1.length())) == 0)
					++count;
			}
			System.out.println(count);
		}

	}
}
