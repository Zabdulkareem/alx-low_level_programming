#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: main function prints alphabets in lowercase
 * then uppercase using the putchar function only.
 * It can only be used in the program thrice.
 * Return: returns 0 on success
 */
int main(void)
{
	int x, y;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (y = 'A'; y <= 'Z'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
