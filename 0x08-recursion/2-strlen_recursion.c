#include "main.h"

/**
 * _strlen_recursion - returns lenght of a string
 * @s: string input parameter
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	/* Base case: Once the char is '\0', terminate process */
	if (*s == '\0')
		return (0);
	/* Recursive call: Add 1 to the len for each call of char in str */
	return (1 + _strlen_recursion(s + 1));
}
