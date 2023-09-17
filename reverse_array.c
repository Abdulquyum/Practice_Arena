#include <stdio.h>

int main(void)
{
	int arr[] = {34, 56, 54, 32, 67, 89, 90, 32, 21};
	int q, i;

	for (q = 0; q < 9; q++)
	{
		printf("These are the numbers in my_array arr[%d]: %d\n", q, arr[q]);
	}

	printf("\n-----------------------------------\n\n");

	for (i = 8; i >= 0; i--)
	{
		printf("Reverse order of my_array arr[%d]: %d\n", i, arr[i]);
	}

	return (0);
}
