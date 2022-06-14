#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to print
 * void: nothing to return
 */
void rev_string(char *s)
{
	int j, len;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	j = 0;
	for (len = len - 1; j < len; j++, len--)
	{
		temp = s[len];
		s[len] = s[j];
		s[j] = temp;
	}
}
