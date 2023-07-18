#include "main.h"

/**
 * print_alphabet - displays alphabet in lowercase followed by a new line
 *
 * Description: This prints all the alphabets in lowercase followed by a
 * new line.
 * Return: void
 */
void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	putchar('\n');
}
