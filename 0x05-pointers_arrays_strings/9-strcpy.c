#include "main.h"

/**
 * _strcpy - copies a string from src to dest including the
 * null terminator
 * @dest: destination to be copied to
 * @src: source string is copied from
 *
 * Description: This function copies a string from one source to another
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

	return (dest_start);	/* Returns start address of dest buffer */
}
