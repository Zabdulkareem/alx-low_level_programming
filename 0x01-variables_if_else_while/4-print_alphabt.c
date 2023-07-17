#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: main displays the alphabet except q and e to the
 * stdout using putchar function.
 * Return: Always zero (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
