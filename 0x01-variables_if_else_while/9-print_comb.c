#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: main function prints all possible
 * combinations of single-digit numbers in
 * ascending order, separated by '-'
 * using only putchar function
 * Return: return 0 always on success
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
