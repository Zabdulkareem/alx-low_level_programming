#include "main.h"

/**
 * more_numbers - prints 0 - 14 followed by a newline
 *
 * Description: This function prints 0 -14 ten times
 * to the std out.
 * Return: nothing is returned
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar(b / 10 + '0');
			}
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
