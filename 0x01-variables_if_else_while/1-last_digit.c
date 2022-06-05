#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: main function prints the last digit
 * of @n and checks if it is 0, greater than
 * 5 or lesser than 6
 * Return: returns 0 on success
 */
int main(void)
{
	int n, mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod = n % 10;
	/* your code goes there */
	if (mod > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, mod);
	else if (mod == 0)
		printf("Last digit of %d is %d and is 0\n", n, mod);
	else if (mod < 6 && mod != 0)
		printf("Last digit of %d is %d less than 6 and not 0", n, mod);
	return (0);
}
