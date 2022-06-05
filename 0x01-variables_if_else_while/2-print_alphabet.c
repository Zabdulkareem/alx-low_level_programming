#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: main function prints alphabets
 * in lowercase followed by a new line. The
 * putchar() function is used to display
 * the alphabets.
 * Return: return 0 on success.
 */
int main(void)
{
	char a = 'a';

	do {
		putchar(a);
	} while (a <= 'z', a++);
	return (0);
}
