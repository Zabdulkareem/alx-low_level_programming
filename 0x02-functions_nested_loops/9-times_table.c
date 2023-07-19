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
		_putchar(48);

		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			product = a * b;

			if (product <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((product / 10) + '0');
			}
			_putchar((product % 10) + '0');

		}
		_putchar('\n');
	}

}
