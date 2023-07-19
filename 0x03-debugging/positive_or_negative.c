#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - Entry point
 *
 * Description: assigns random number to the variable `n` each time it is
 * executed.
 * Return: nothing is returned
 */
void positive_or_negative(int n)
{

	/* srand(time(0));
	n = rand() - RAND_MAX / 2; */

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
