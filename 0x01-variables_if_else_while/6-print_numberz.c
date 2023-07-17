#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: main prints 0-9 using putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
