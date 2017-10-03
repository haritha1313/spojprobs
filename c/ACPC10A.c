#include <stdio.h>

int main() {
	int a, b, c, m;
	scanf("%d %d %d", &a, &b, &c);
	
	while(1)
	{
		if(a == 0 && b == 0 && c == 0)
			break;
		else
		{
		 if( b == ((a + c) /2.0 ))
		 	printf("AP %d\n", c+(c-b));
		 else
		 	printf("GP %d\n", c*(c/b));

		 scanf("%d %d %d", &a, &b, &c);	 
		}
	}
	return 0;
}
