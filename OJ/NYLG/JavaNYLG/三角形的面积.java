import java.text.DecimalFormat;
import java.util.Scanner;

public class Main 
{
	public static void main(String args[]) 
	{
		Scanner cin = new Scanner(System.in);

		 while (cin.hasNext()) 
	     {
			 double x1 = cin.nextInt();
			 double y1 = cin.nextInt();
	    	   
			 double x2 = cin.nextDouble();
			 double y2 = cin.nextDouble();
	    	   
			 double x3 = cin.nextDouble();
			 double y3 = cin.nextDouble();
	    	   
	    	   if ((x1 == 0) && (y1 == 0) && (x2 ==0) && (y2 == 0) && (x3 == 0) && (y3 == 0))
	    		   break;
	    	   else
	    	   {
	    		   double a = Math.sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	    		   double b = Math.sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
	    		   double c = Math.sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
	    		   double p = (a + b +c)/2;
	    		   double s = Math.sqrt(p*(p-a)*(p-b)*(p-c));
	    		   DecimalFormat df = new DecimalFormat("0.0");
	    		   String num = df.format(s);
	    		   System.out.println(num);
	    		  
	      		   //System.out.println(s);
	    	   }
			// TODO Auto-generated method stub
	     }

	}
}