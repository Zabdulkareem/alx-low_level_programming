#include "main.h"

/**
 * _isupper - function that checks uppercase
 * @c : character to be checked
 *
 * Description: This function checks if the argument
 * passed into it is an uppercase character.
 * Return: 1 if character is uppercase otherwise zero.
 */
int _isupper(int c)
{
	return (c >= 65 && c <= 90) ? 1 : 0;
}
