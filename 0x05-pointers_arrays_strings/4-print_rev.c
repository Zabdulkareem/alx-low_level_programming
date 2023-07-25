#include "main.h"

/**
 * print_rev - prints reverse of a string
 * @s: string arg to be reversed
 *
 * Return: nothing is returned
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;	/* Terminates first loop after getting len of str */
	for (--i; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
