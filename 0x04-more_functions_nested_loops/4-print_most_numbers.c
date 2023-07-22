#include "main.h"

/**
 * print_most_numbers - print 0-9 without 2 and 4
 *
 * Description: This function output numbers from 0 upto
 * 9 while omitting 2 and 4 using _putchar
 * Return: Nothing is returned
 */
void print_most_numbers(void)
{
	int c = 48;

	while (c <= 57)
	{
		if (c != 50 && c != 52)
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
