#include "main.h"

/**
 * _abs - Absolute value function
 * @n: argument whose absolute value is printed
 *
 * Description: This function prints out the absolute value of an
 * integer
 * Return: the int argument
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}
