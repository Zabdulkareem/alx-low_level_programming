#include "main.h"

/**
 * print_square - prints out a square
 * @size: dimension of the square
 *
 * Description: This function will print out a square to
 * the std output based on the size (arg) passed into the
 * function.
 * Return: Nothing is returned
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
