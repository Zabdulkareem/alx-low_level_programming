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
	for (int x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar("\n");
	return (0);
}
