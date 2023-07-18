#include "main.h"

/**
 * main - checks if the code can identify lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	_putchar('\n');

	r = _islower('o');
	_putchar(r + '0');
	_putchar('\n');

	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}
