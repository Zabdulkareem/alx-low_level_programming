#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints out _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
