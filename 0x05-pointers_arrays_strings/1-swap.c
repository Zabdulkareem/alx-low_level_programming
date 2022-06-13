#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer argument that will be swapped
 * @b: integer parameter that will be swapped
 * void: returns nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
