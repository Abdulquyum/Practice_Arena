#include <stdio.h>

int main(void)
{
	long int n, div = 2, big;

	printf("Input your number and get its prime factoors: ");
	scanf("%ld", &n);

	while(n > 1)
	{
		if (n % div == 0)
		{
			printf("%ld, ", div);

			n /= div;
		}
		else
		{
			div++;
		}
	}
	big = div;
	printf("\nThe largest prime factor is: %ld\n", big);
	return 0;
}
