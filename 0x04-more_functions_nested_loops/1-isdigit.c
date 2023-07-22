#include "main.h"

/**
 * _isdigit - function checks for digit
 * @c: digit to be checked
 *
 * Description: This function checks if the argument
 * passed is a digit.
 * Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
