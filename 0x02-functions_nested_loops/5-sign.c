#include "main.h"

/**
 * print_sign - This prints the sign of a number
 * @n: The argument whose sign is printed
 *
 * Description: This function prints the sign of a number if it
 * is greater than zero (+), if it is 0 prints 0 and (-) if
 * the number is less than zero
 * Return: 1 if it is positive, 0 if it is zero and -1 if it is
 * negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
