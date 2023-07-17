#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: this function prints alphabets in lower and uppercases
 * followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	char upper, lower;

	lower = 'a';
	upper = 'A';
	/* Prints lower case letters */
	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	/* Prints uppercase letters */
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}
