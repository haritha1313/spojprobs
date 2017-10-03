#include <stdio.h>

long numrev(long int x)
{
		int rem, rev=0;
		while(x > 0)
		{
			rem = x % 10;
			rev = rev * 10 + rem;
			x /= 10;
		}
		return rev;
}

int main()
{
	int N;
	long int a, b, i;
	
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%ld %ld", &a, &b);
		a = numrev(a);
		b = numrev(b);
		a += b;
		printf("%ld\n", numrev(a));
	}

	return 0;
}
