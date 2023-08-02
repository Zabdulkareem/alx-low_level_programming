#include "main.h"

/**
 * rev_string - prints reverse of a string
 * @s: input string to be reversed
 *
 * Return: nothing is returned
 */
void rev_string(char *s)
{
	int i = 0;
	int len;
	char temp;

	/* First Get length of string */
	for (len = 0; s[len] != '\0'; len++)
		;

	/* Next swap chars from both ends until reaching the middle */
	for (len = len - 1; i < len; len--, i++)
	{
		temp = s[len];
		s[len] = s[i];
		s[i] = temp;
	}
}
