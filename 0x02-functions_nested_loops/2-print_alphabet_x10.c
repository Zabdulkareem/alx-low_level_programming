#include "main.h"

/**
 * print_alphabet_x10 - displays the alphabets 10 times to the stdout
 *
 * Description: This function outputs the alphabets ten times to the
 * standard output
 * Return: nothing is returned
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		for (; c <= 'z'; c++)
		{
			_putchar(c);
		}
		c = 'a';
		_putchar('\n');
	}
}
