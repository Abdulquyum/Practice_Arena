#include <stdio.h>

int main(void)
{
	int n, div = 2, big;

	printf("Input your number and get its prime factoors: ");
	scanf("%d", &n);

	while(n > 1)
	{
		if (n % div == 0)
		{
			printf("%d, ", div);

			n /= div;
		}
		else
			div++;
	}
	// big = div;
	// printf("big: %d", big);
	printf("\n");
	return 0;
}
