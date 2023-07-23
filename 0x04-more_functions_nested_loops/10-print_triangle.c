#include "main.h"

/**
 * print_triangle - prints out a triangle
 * @size: dimension of the triangle
 *
 * Description: This function will print out a triangle to
 * the std output based on the size (arg) passed into the
 * function.
 * Return: Nothing is returned
 */
void print_triangle(int size)
{
        int i, j;

        if (size <= 0)
                _putchar('\n');
        else
        {
                for (i = 1; i <= size; i++)
                {
                        for (j = 1; j <= size - 1; j++)
                        {
				_putchar(' ');
			}

                        for (j = 1; j <= i; j++)
                        {
                                _putchar('#');
                        }
                        _putchar('\n');
		}
        }
}