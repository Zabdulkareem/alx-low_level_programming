#include "main.h"

/**
 * factorial - provides the factorial of a given number
 * @n: Input int arg whose factorial is computed
 *
 * Return: factorial of a number
 */
int factorial(int n)
{
	/* Base cases: for factorial of number */
	if (n == 0)
		return (1);

	/* If n is negative, -1 is returned to indicate error */
	if (n < 0)
		return (-1);

	/* Recursive case: find factorial of (n-1) multiply by n */
	return (n * factorial(n - 1));
}
