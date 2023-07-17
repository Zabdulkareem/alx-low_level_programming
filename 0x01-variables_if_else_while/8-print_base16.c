#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: main function prints all the numbers of base 16
 * in lowercase followed by a new line
 * Return: Always zero (Success)
 */
int main(void)
{
	int num = '0';
	char c = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
