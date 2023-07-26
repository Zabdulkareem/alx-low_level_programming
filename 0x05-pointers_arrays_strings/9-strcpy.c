#include "main.h"

/**
 * _strcpy: Function copies a string from src to dest
 * @dest: destination to be copied to
 * @src: source string is copied from
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;	/* Save start add to dest buffer */

	/* Copy each char from src to dest until null terminator is reached */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Copy the null terminator */
	*dest = '\0';

	return dest_start;	/* Returns start address of dest buffer */
}
