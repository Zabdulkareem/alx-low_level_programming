#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: main prints the lowercase alphabets in reverse
 * followed by a new line.
 * Return: Always zero (Success)
 */
int main(void)
{
	int c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
