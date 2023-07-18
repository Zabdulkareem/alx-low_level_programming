#include "main.h"

/**
 * _islower - Function checks for lowercase character.
 * @c: This is the character that is checked.
 *
 * Description: This function will check the parameter if it is
 * a lowercase character or not.
 * Return: 1 if it is lowercase otherwise returns 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
