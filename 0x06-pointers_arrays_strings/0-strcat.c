#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: returns a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, len_dest, len_src;
	
	len_dest = strlen(dest);
	len_src = strlen(src);

	for (i = 0; i < len_src; i++)
	{
		dest[len_dest + i] = src[i];
	}
	dest[len_dest + i] = '\0';
	return(dest);
}
