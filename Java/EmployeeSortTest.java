import java.util.*;
/**
 *EmployTest.java
 *Time:2013-10-6
 *@author zhiliang
 * 
 * */
public class EmployeeSortTest 
{

	/**
	 * @param args
	 */
	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		Employee [] staff = new Employee[4];
		staff[0] = new Employee("Harry Hacker", 35000);
		staff[1] = new Employee("Cal1 Cracker", 75000);
		staff[2] = new Employee("Tony Tester", 38000);
		staff[3] = new Employee("ZhiLiang Manger", 8970000);
		
		Arrays.sort(staff);
		
		for (Employee e : staff)
			System.out.println("Name=" + e.getName() + ",Salary=" + e.getSalary());
	}
}

class Employee implements Comparable<Employee>
{
	public Employee(String n, double s)
	{
		name = n;
		salary = s;
	}
	
	public String getName()
	{
		return name;
	}
	
	public double getSalary()
	{
		return salary;
	}
	
	public void raiseSalary(double byPercent)
	{
		double raise = salary * byPercent / 100;
		salary += raise;
	}
	
	public int compareTo(Employee other)
	{
		return (int) (this.salary - other.salary);
	}
	private String name;
	private double salary;
}
