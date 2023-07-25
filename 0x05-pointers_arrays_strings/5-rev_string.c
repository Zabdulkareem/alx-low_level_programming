#include "main.h"

/**
 * rev_string - prints reverse of a string
 * @s: input string to be reversed
 *
 * Return: nothing is returned
 */
void rev_string(char *s)
{
	int i;
	int len = 0;
	char temp;

	/* First Get length of string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Next swap chars from both ends until reaching the middle */
	for (i = 0; i < (len / 2); i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
	_putchar('\n');
}
