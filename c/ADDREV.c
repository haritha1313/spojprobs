//Importing Header
#include <stdio.h>

long numrev(long int x) //Function to reverse a number by Digit Extraction
{
		int rem, rev=0;
		while(x > 0)
		{
			rem = x % 10; //Last digit is extracted
			rev = rev * 10 + rem;
			x /= 10; //x is reduced by one digit
		}
		return rev;
}

int main()
{
	int N;
	long int a, b, i;
	
	scanf("%d", &N); //Number of test cases is entered
	for(i = 0; i < N; i++) //Loop from 1 to N is run
	{
		scanf("%ld %ld", &a, &b); //two integers are taken
		a = numrev(a); //a is reversed
		b = numrev(b); //b is reversed
		a += b; //a and b are added and it's stored in a
		printf("%ld\n", numrev(a)); //reverse of sum of reverse of a and b is printed
	}

	return 0;
}
