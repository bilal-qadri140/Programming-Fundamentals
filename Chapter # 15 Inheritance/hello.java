import java.util.*;
public class hello {
	public static void main(String [] args) {
		Scanner s = new Scanner(System.in);
		
		int a, b, c;
		double res;
		
		System.out.print("Enter first Number: ");
		a = s.nextInt();
		
		System.out.print("Enter second Number: ");
		b = s.nextInt();
		
		System.out.print("Enter third Number: ");
		c = s.nextInt();
		
		res = a * b * c;
		
		System.out.print("Product of Numbers is: " + res);
	}
}