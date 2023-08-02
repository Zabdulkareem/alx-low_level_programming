#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input string
 *
 * Description: This function displays only half of a string
 * followed by a new line
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = 0;
	int i, start_index;

	/* Get length of string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Find the start of index of second half of string */
	start_index = len / 2;
	if (len % 2 == 1)
	{
		start_index = (len - 1) / 2;	/* Adjust index for odd len num */
	}

	/* Next print the second half of string */
	for (i = start_index; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}

