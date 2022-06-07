#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: main function prints all single digit
 * numbers of base 10 starting from zero, followed
 * by a new line using the putchar function
 * only two times in the code
 * Return: returns 0 always on success
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
	return (0);
}
