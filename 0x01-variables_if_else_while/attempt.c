#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all possible combinations of two two-digit
 * numbers
 * Return: Always 0;
 */
int main(void)
{

	int a = 0, b = 0, c = 0, d = 0;

	while (a <= 9)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				while (d <= 9)
				{
					if (((c *10 + d) > (a * 10 + b) &&
							c >= a) || a < c)
					{
						putchar(a + '0');
						putchar(b + '0');
						putchar(' ');
						putchar(c + '0');
						putchar(d + '0');
					}
						if (a == 9 && b == 9 && c == 9 && d == 9)
							putchar('\n');
						else
						{
							putchar(',');
							putchar(' ');
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}

	return (0);
}
