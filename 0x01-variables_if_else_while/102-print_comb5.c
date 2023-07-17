#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: main prints two combinations of two digits
 * Return: 0 on success
 */
int main(void)
{
	int a, b, c, d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9';	b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					if (((c * 10 + d) > (a * 10 + b) && c >= a) || a < c)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
					if (a == '9' && b == '8' && c == '9' && d == '9')
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}

					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
