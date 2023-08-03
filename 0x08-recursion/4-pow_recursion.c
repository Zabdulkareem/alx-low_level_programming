#include "main.h"

/**
 * _pow_recursion - function returns the value of x raised to the
 * power of y
 * @x: int arg to be raised
 * @y: int arg x is raised by
 *
 * Return: Power of x raised to y
 */
int _pow_recursion(int x, int y)
{
	/* Base case: */
	if (y == 0)
		return (1);

	/* If y is lower than 0, returns -1 indicating an error */
	if (y < 0)
		return (-1);

	/* Recursive case: Calc power of x to y by calling (x, y-1) * x */
	return (x * _pow_recursion(x, y - 1));
}
