//Importing Header File
#include <stdio.h>

int main() {
	int a, b, c, m; //Initializing Variables
	scanf("%d %d %d", &a, &b, &c); //Scanning Integers on console
	
	while(1) //Running Infinity Loop
	{
		if(a == 0 && b == 0 && c == 0)
			break; //Breaking loop if a, b, and c become zero
		else
		{
		 if( b == ((a + c) /2.0 ))
		 	printf("AP %d\n", c+(c-b)); //Printing result if a, b and c are in AP
		 else
		 	printf("GP %d\n", c*(c/b));

		 scanf("%d %d %d", &a, &b, &c);	 //Scanning again
		}
	}
	return 0;
}
