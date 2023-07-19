#include "main.h"

/**
 * times_table - Times table function
 *
 * Description: This function prints the times table starting with
 * zero up to nine times
 * Return: nothing is returned
 */
void times_table(void)
{
	int a, b, product;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			product = a * b;

			if (product > 9)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else if (b != 1)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else
				_putchar(product + '0');

			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
