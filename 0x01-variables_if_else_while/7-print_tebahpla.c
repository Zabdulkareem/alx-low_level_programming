#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: main function prints lowercase alphabet
 * in reverse followed by a new line using only the
 * putchar() function
 * Return: return 0 always on success
 */
int main(void)
{
	char c = 'z';
	int n = 0;

	while (n < 26)
	{
		putchar(c);
		n++;
		c--;
	}

	putchar('\n');
	return (0);
}
