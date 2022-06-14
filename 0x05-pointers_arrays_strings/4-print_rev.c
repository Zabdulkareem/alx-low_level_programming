#include "main.h"
#include <string.h>

/**
 * print_rev - prints the reverse of a string
 * followed by a new line
 * @s: string char argument
 * void: returns nothing
 */
void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
