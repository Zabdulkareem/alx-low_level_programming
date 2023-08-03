#include "main.h"

int is_prime_helper(int n, int divisor);

/**
 * is_prime_number - Checks if a number is prime
 * @n: number to be checked if it's prime
 *
 * Return: Returns 1 if it is prime and 0 if it is
 * not
 */
int is_prime_number(int n)
{
	/* Special cases: 0, 1, negative  numbers are not prime */
	if (n <= 1)
		return (0);

	/* Calls the helper function to check if n is prime */
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - checks if a number is only divisible by
 * itself and 1 or if it can be divided by other numbers
 * @n: number to be checked
 * @divisor: The divisor
 *
 * Return: 1 if  the divisor is prime or 0 if it is not
 */
int is_prime_helper(int n, int divisor)
{
	/* Base case: If the divisor reaches the sqrt of n, the num is prime */
	if (divisor * divisor > n)
		return (1);

	/* If n is divisible by any num other than 1 and n, it's not prime */
	if (n % divisor == 0)
		return (0);

	/* Recursive case: check for divisibility with the next divisor */
	return (is_prime_helper(n, divisor + 1));
}
