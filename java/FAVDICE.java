import java.util.Scanner;	// needed to read input
public class FAVDICE
{
	public static void calculator(int sides)	// calculator function for each test case
	{
		float expectation = 0;	// expected number of dice rolls
		for (float i = 1; i <= sides; i++)
		{
			expectation += (1.0/i);	// adds all 1/1, 1/2, ... 1/n rolls
		}
		expectation *= sides;	// n * (expectation)
		System.out.printf("%.2f\n", expectation);	// estimated number of rolls
	}
	public static void main(String[] args)
	{
		Scanner reader = new Scanner(System.in);  // Reading from System.in
		int sides = 0;	// number of sides of dice
		int cases = reader.nextInt(); // Scans the next token of the input as an int.
		for (int i = 0; i < cases; i++)	// tests all cases
		{
			sides = reader.nextInt();
			calculator(sides);	// calculates based on passed in sides
		}
		reader.close(); 
	}
}