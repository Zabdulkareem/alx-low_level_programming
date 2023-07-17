#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all single digit numbers starting from
 * 0 in base 10, followed by a new line.
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');

	return (0);
}
