#include "main.h"
#include <string.h>

/**
 * _puts - prints a string followed by a new
 * line to the stdout
 * @str: string argument
 * void: returns nothing
 */
void _puts(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
