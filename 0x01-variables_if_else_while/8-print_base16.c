#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: main function prints all the numbers
 * of base 16 in lowercase followed by a new
 * line using the putchar function max
 * three times in the program
 * Return: return 0 always on success
 */
int main(void)
{
	int num = 0;
	char a = 'a';

	while (num < 16)
	{
		if (num < 10)
			putchar(num + '0');
		else
		{
			putchar(a);
			a++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
