#include "main.h"

int find_sqrt(int n, int root);

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: int parameter
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int sqrt = 0;

	/* Base case: square root of 1 is 1 */
	if (n == 1)
		return (1);

	/* If n is negative, the square root isn't natural */
	if (n < 0)
		return (-1);

	/* call helper function using binary search */
	return (find_sqrt(n, sqrt));
}

/**
 * find_sqrt - find natural square root of num
 * @n: The num to find the square root
 * @sqrt: The root to be tested
 *
 * Return: square root of natural number otherwise -1
 */
int find_sqrt(int n, int sqrt)
{
	if ((sqrt * sqrt) == n)
		return (sqrt);

	if (sqrt == (n / 2))
		return (-1);

	return (find_sqrt(n, sqrt + 1));
}
