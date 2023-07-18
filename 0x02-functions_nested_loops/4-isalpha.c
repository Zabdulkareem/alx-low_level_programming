#include "main.h"

/**
 * _isalpha- checks if character is an alphabet
 * @c: This is the argument that is checked
 *
 * Description: This function checks if the argument
 * passed into the function is an alphabet.
 * Return: 1 if it is an alphabet otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
