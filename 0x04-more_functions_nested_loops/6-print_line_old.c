#include "main.h"

/**
 * print_line - prints _
 * @n: the number of times the char '_' is printed
 *
 * Description: This function outputs a line to the
 * standard output.
 * Return: Nothing is returned.
 */
void print_line(int n)
{
	int repeat;	/* Num of times the char is repeated */

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (repeat = 0; repeat <= n; repeat++)
			_putchar('_');
		_putchar('\n');
	}
}
