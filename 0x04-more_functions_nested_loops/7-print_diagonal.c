#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @c: number of times character is printed
 *
 * Description: This function outputs a diagonal line
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
