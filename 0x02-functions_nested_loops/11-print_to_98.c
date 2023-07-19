#include "main.h"

/**
 * print_to_98 - displays natural number
 * @n: integer to print from to 98
 *
 * Description: Print all numbers a particular number upto
 * 98
 * Return: nothing is returned
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);

			if (n != 98)
				printf(", ");
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);

			if (n != 98)
				printf(", ");
			n++;
		}
	}
	printf("\n");
}
