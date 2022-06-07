#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: main function prints out lowercase
 * alphabets except q and e.
 * Return: returns 0 on success.
 */
int main(void)
{
	char a = 'a';
	int n = 0;

	while (n < 26)
	{
		if (a != 'q' && a != 'e')
		{
			putchar (a);
		}
		a++;
		n++;
	}
	putchar('\n');
	return (0);
}
