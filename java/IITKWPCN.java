import java.util.Scanner;	// needed to read input
public class IITKWPCN
{
	public static void probability(int w, int b)	// calculates probability for each case
	{
		/*
			All that this problem is dependent on, is the number of black balls.
			For example, take the case of 1w, 2b. The possible resulting picks are:
				1w 1b and 2b.
				1w 1b: black ball added, result: 2b.
				2b: white ball added, result: 2w.
				both cases result in a white ball being added (note: # of black balls was even)
				final: 1w
			Another example, take the case of 2w, 1b. The possible resulting picks are:
				1w 1b and 2w.
				1w 1b: black ball added, result: 1w 1b.
				2w: white ball added, result: 1w 1b.
				both cases result in a black ball being added (note: # of black balls was odd)
				final: 1b
		*/
		if (b % 2 == 0)
		{
			System.out.println("0.000000");	// prints probability of black ball at end
		}
		else
		{
			System.out.println("1.000000");	// prints probability of black ball at end
		}
	}
	public static void main(String[] args)
	{
		Scanner reader = new Scanner(System.in);  // Reading from System.in
		int white = 0;	// number of white balls
		int black = 0;	// number of black balls
		int cases = reader.nextInt(); // Scans the next token of the input as an int.
		for (int i = 0; i < cases; i++)
		{
			white = reader.nextInt();	// number of white balls
			black = reader.nextInt();	// number of black balls
			probability(white, black);	// calls function with both ball counts
		}
		reader.close(); 
	}
}