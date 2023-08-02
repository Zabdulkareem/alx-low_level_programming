#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string parameter to be reversed
 *
 * Return: nothing is returned
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		/* Recursive call of next char in string */
		_print_rev_recursion(s +1);

		/* prints the chars after all the recursive calls */
		_putchar(*s);
	}
}
