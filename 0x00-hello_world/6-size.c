#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program prints size of various types on
 * the computer it is compiled and run on.
 *
 * Return: Always zero (Success)
 */
int main(void)
{
	printf("Size of a char: %zd byte(s)\n", sizeof(char));
	printf("Size of an int: %zd byte(s)\n", sizeof(int));
	printf("Size of a long int: %zd byte(s)\n", sizeof(long));
	printf("Size of a long long int: %zd byte(s)\n", sizeof(long long));
	printf("Size of a float: %zd byte(s)\n", sizeof(float));

	return (0);
}
