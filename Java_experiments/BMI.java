/**This program calculates BMI Using weight and height
 * Author: Homeless-Emporer
 * 9-18-24
 * purpose: for practice
 */
import java.util.Scanner;
public class BMI
{
	public static void main (String[] args)
	{
		//intialize variables for storing height and weight
		double height = getHeight();
		double weight = getWeight();
		double BMI;

		BMI = weight /(height * height) * 703;

		System.out.printf("Your current BMI is %.2f\n", BMI);
	
	 }

	public static double getHeight()
	{
		Scanner scanner = new Scanner(System.in);
		System.out.print("Enter your height in centimeters: ");
		return scanner.nextDouble();
	}

	public static double getWeight()
	{
		Scanner scanner = new Scanner(System.in);
		System.out.print("Enter your weight in pounds: ");
		return scanner.nextDouble();
	}
	
}
