#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: main function prints all single
 * digit numbers of base 10, starting from
 * 0 followed by a new line.
 * Return: returns 0 on success
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d\n", n);
		n++;
	}
	return (0);
}
