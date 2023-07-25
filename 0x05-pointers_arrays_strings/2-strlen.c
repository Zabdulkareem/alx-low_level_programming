#include "main.h"

/**
 * _strlen - returns length of string
 * @s: the string whose length is returned
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
	{
		length++;
	}
	return(length);
}
