#include "main.h"

/**
 * print_numbers - prints num 0 to 9
 *
 * Description: This function displays numbers from
 * 0 to 9 to the standard output
 * Return: Nothing is returned
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
		_putchar(c);
	_putchar('\n');
}
