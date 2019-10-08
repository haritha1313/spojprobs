#include <stdio.h>

int main() {
	int t, carry = 0;
	scanf("%d", &t);
	while(t--)
	{
		int n, size;
		scanf(" %d", &n);
		int result[200];
		size = 1;
		for(int i = 0; i < 200; i++)
        {
            result[i] = 1;
        }
		for(int j = 1; j <= n; j++)
		{
		    carry = 0;
			for(int i = 0; (i < size || carry) && size <= 200; i++)
			{
				if(i >= size)
				{
					result[size] = (carry % 10);
					carry /= 10;
					size++;
					continue;
				}
				result[i] *= j;
				result[i] += carry;
				carry = result[i] / 10;
				result[i] %= 10;
			}
		}
		for(int i = size - 1; i >= 0; i--)
		{
			printf("%d", result[i]);
		}
		printf("\n");
	}
	return 0;
}
