#include "main.h"

/**
 * print_array - prints n elements of array of ints
 * @n: number of elements of the array to be printed
 * @a: array
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	/* Print the element of array */
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		/* Print comma and space if it's not last element */
		if (i < n - 1)
		{
			printf(", ");
		}
	}

	/* Print a new line after looping and printing all elements */
	printf("\n");
}
