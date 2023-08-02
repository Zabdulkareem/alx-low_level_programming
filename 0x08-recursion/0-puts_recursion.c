#include "main.h"

/**
 * _puts_recursion - Function prints a string followed by a
 * new line.
 * @s: string character parameter
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		/* Base case: if we are at the end of string ('\0'), print a new line */
		_putchar('\n');
		return;
	}
	/* Print first char of str, then make a recursive call to remaining str */
	_putchar(*s);
	_puts_recursion(s + 1);
}
