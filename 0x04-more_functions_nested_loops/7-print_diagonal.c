#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @n: number of times character is printed
 *
 * Description: This function outputs diagonal lines
 * on to the std out based on the arguments passed.
 * Return: nothing is returned
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
